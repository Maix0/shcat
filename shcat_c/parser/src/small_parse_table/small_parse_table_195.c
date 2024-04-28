/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_195.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_975(t_small_parse_table_array *v)
{
	v->a[19500] = sym_translated_string;
	v->a[19501] = sym_number;
	v->a[19502] = sym_simple_expansion;
	v->a[19503] = sym_expansion;
	v->a[19504] = sym_command_substitution;
	v->a[19505] = sym_process_substitution;
	v->a[19506] = actions(2494);
	v->a[19507] = 21;
	v->a[19508] = anon_sym_SEMI;
	v->a[19509] = anon_sym_PIPE_PIPE;
	v->a[19510] = anon_sym_AMP_AMP;
	v->a[19511] = anon_sym_PIPE;
	v->a[19512] = anon_sym_AMP;
	v->a[19513] = anon_sym_LT;
	v->a[19514] = anon_sym_GT;
	v->a[19515] = anon_sym_LT_LT;
	v->a[19516] = anon_sym_GT_GT;
	v->a[19517] = anon_sym_RPAREN;
	v->a[19518] = anon_sym_SEMI_SEMI;
	v->a[19519] = anon_sym_PIPE_AMP;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = anon_sym_AMP_GT;
	v->a[19521] = anon_sym_AMP_GT_GT;
	v->a[19522] = anon_sym_LT_AMP;
	v->a[19523] = anon_sym_GT_AMP;
	v->a[19524] = anon_sym_GT_PIPE;
	v->a[19525] = anon_sym_LT_AMP_DASH;
	v->a[19526] = anon_sym_GT_AMP_DASH;
	v->a[19527] = anon_sym_LT_LT_DASH;
	v->a[19528] = anon_sym_LT_LT_LT;
	v->a[19529] = 35;
	v->a[19530] = actions(71);
	v->a[19531] = 1;
	v->a[19532] = sym_comment;
	v->a[19533] = actions(237);
	v->a[19534] = 1;
	v->a[19535] = sym_word;
	v->a[19536] = actions(258);
	v->a[19537] = 1;
	v->a[19538] = anon_sym_DOLLAR;
	v->a[19539] = actions(264);
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = 1;
	v->a[19541] = aux_sym_number_token1;
	v->a[19542] = actions(266);
	v->a[19543] = 1;
	v->a[19544] = aux_sym_number_token2;
	v->a[19545] = actions(270);
	v->a[19546] = 1;
	v->a[19547] = anon_sym_DOLLAR_LPAREN;
	v->a[19548] = actions(282);
	v->a[19549] = 1;
	v->a[19550] = sym_test_operator;
	v->a[19551] = actions(284);
	v->a[19552] = 1;
	v->a[19553] = sym__brace_start;
	v->a[19554] = actions(1075);
	v->a[19555] = 1;
	v->a[19556] = anon_sym_DOLLAR_LBRACK;
	v->a[19557] = actions(1079);
	v->a[19558] = 1;
	v->a[19559] = sym__special_character;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = actions(1081);
	v->a[19561] = 1;
	v->a[19562] = anon_sym_DQUOTE;
	v->a[19563] = actions(1085);
	v->a[19564] = 1;
	v->a[19565] = anon_sym_DOLLAR_LBRACE;
	v->a[19566] = actions(1087);
	v->a[19567] = 1;
	v->a[19568] = anon_sym_DOLLAR_BQUOTE;
	v->a[19569] = actions(3588);
	v->a[19570] = 1;
	v->a[19571] = anon_sym_LPAREN;
	v->a[19572] = actions(3590);
	v->a[19573] = 1;
	v->a[19574] = anon_sym_BANG;
	v->a[19575] = actions(3596);
	v->a[19576] = 1;
	v->a[19577] = anon_sym_TILDE;
	v->a[19578] = actions(3598);
	v->a[19579] = 1;
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = anon_sym_BQUOTE;
	v->a[19581] = actions(3602);
	v->a[19582] = 1;
	v->a[19583] = sym_variable_name;
	v->a[19584] = actions(3811);
	v->a[19585] = 1;
	v->a[19586] = aux_sym__simple_variable_name_token1;
	v->a[19587] = state(2509);
	v->a[19588] = 1;
	v->a[19589] = sym_command_substitution;
	v->a[19590] = state(2690);
	v->a[19591] = 1;
	v->a[19592] = aux_sym__literal_repeat1;
	v->a[19593] = state(3126);
	v->a[19594] = 1;
	v->a[19595] = sym__expression;
	v->a[19596] = state(3359);
	v->a[19597] = 1;
	v->a[19598] = sym__arithmetic_postfix_expression;
	v->a[19599] = state(3361);
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
