#pragma once
#include <graphene/protocol/base.hpp>

#include <graphene/protocol/sidechain_defs.hpp>

namespace graphene { namespace protocol {

    struct sidechain_address_add_operation : public base_operation
    {
        struct fee_parameters_type { uint64_t fee = 0; };

        asset fee;
        account_id_type payer;

        account_id_type sidechain_address_account;
        sidechain_type sidechain;
        string deposit_public_key;
        string deposit_address;
        string deposit_address_data;
        string withdraw_public_key;
        string withdraw_address;

        account_id_type fee_payer()const { return payer; }
        share_type      calculate_fee(const fee_parameters_type& k)const { return 0; }
    };

    struct sidechain_address_update_operation : public base_operation
    {
        struct fee_parameters_type { uint64_t fee = 0; };

        asset fee;
        account_id_type payer;

        sidechain_address_id_type sidechain_address_id;
        account_id_type sidechain_address_account;
        sidechain_type sidechain;
        optional<string> deposit_public_key;
        optional<string> deposit_address;
        optional<string> deposit_address_data;
        optional<string> withdraw_public_key;
        optional<string> withdraw_address;

        account_id_type fee_payer()const { return payer; }
        share_type      calculate_fee(const fee_parameters_type& k)const { return 0; }
    };

    struct sidechain_address_delete_operation : public base_operation
    {
        struct fee_parameters_type { uint64_t fee = 0; };

        asset fee;
        account_id_type payer;

        sidechain_address_id_type sidechain_address_id;
        account_id_type sidechain_address_account;
        sidechain_type sidechain;

        account_id_type fee_payer()const { return payer; }
        share_type      calculate_fee(const fee_parameters_type& k)const { return 0; }
    };

} } // namespace graphene::protocol

FC_REFLECT(graphene::protocol::sidechain_address_add_operation::fee_parameters_type, (fee) )
FC_REFLECT(graphene::protocol::sidechain_address_add_operation, (fee)(payer)
        (sidechain_address_account)(sidechain)
        (deposit_public_key)(deposit_address)(deposit_address_data)
        (withdraw_public_key)(withdraw_address) )

FC_REFLECT(graphene::protocol::sidechain_address_update_operation::fee_parameters_type, (fee) )
FC_REFLECT(graphene::protocol::sidechain_address_update_operation, (fee)(payer)
        (sidechain_address_id)
        (sidechain_address_account)(sidechain)
        (deposit_public_key)(deposit_address)(deposit_address_data)
        (withdraw_public_key)(withdraw_address) )

FC_REFLECT(graphene::protocol::sidechain_address_delete_operation::fee_parameters_type, (fee) )
FC_REFLECT(graphene::protocol::sidechain_address_delete_operation, (fee)(payer)
        (sidechain_address_id)
        (sidechain_address_account)(sidechain) )
