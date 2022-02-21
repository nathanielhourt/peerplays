#pragma once
#include <graphene/protocol/son.hpp>

#include <graphene/chain/evaluator.hpp>

namespace graphene { namespace chain {

class create_son_evaluator : public evaluator<create_son_evaluator>
{
public:
    typedef son_create_operation operation_type;

    void_result do_evaluate(const son_create_operation& o);
    object_id_type do_apply(const son_create_operation& o);
};

class update_son_evaluator : public evaluator<update_son_evaluator>
{
public:
    typedef son_update_operation operation_type;

    void_result do_evaluate(const son_update_operation& o);
    object_id_type do_apply(const son_update_operation& o);
};

class deregister_son_evaluator : public evaluator<deregister_son_evaluator>
{
public:
    typedef son_deregister_operation operation_type;

    void_result do_evaluate(const son_deregister_operation& o);
    void_result do_apply(const son_deregister_operation& o);
};

class son_heartbeat_evaluator : public evaluator<son_heartbeat_evaluator>
{
public:
    typedef son_heartbeat_operation operation_type;

    void_result do_evaluate(const son_heartbeat_operation& o);
    object_id_type do_apply(const son_heartbeat_operation& o);
};

class son_report_down_evaluator : public evaluator<son_report_down_evaluator>
{
public:
    typedef son_report_down_operation operation_type;

    void_result do_evaluate(const son_report_down_operation& o);
    object_id_type do_apply(const son_report_down_operation& o);
};

class son_maintenance_evaluator : public evaluator<son_maintenance_evaluator>
{
public:
    typedef son_maintenance_operation operation_type;

    void_result do_evaluate(const son_maintenance_operation& o);
    object_id_type do_apply(const son_maintenance_operation& o);
};

} } // namespace graphene::chain
