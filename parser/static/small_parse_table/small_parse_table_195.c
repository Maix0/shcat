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
	v->a[19500] = anon_sym_LT;
	v->a[19501] = anon_sym_GT;
	v->a[19502] = actions(419);
	v->a[19503] = 2;
	v->a[19504] = anon_sym_GT_GT;
	v->a[19505] = anon_sym_LT_LT;
	v->a[19506] = actions(427);
	v->a[19507] = 2;
	v->a[19508] = anon_sym_EQ_EQ;
	v->a[19509] = anon_sym_BANG_EQ;
	v->a[19510] = actions(429);
	v->a[19511] = 2;
	v->a[19512] = anon_sym_LT_EQ;
	v->a[19513] = anon_sym_GT_EQ;
	v->a[19514] = actions(431);
	v->a[19515] = 2;
	v->a[19516] = anon_sym_PLUS;
	v->a[19517] = anon_sym_DASH;
	v->a[19518] = actions(433);
	v->a[19519] = 3;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = anon_sym_STAR;
	v->a[19521] = anon_sym_SLASH;
	v->a[19522] = anon_sym_PERCENT;
	v->a[19523] = actions(493);
	v->a[19524] = 10;
	v->a[19525] = anon_sym_PLUS_EQ;
	v->a[19526] = anon_sym_DASH_EQ;
	v->a[19527] = anon_sym_STAR_EQ;
	v->a[19528] = anon_sym_SLASH_EQ;
	v->a[19529] = anon_sym_PERCENT_EQ;
	v->a[19530] = anon_sym_LT_LT_EQ;
	v->a[19531] = anon_sym_GT_GT_EQ;
	v->a[19532] = anon_sym_AMP_EQ;
	v->a[19533] = anon_sym_CARET_EQ;
	v->a[19534] = anon_sym_PIPE_EQ;
	v->a[19535] = 12;
	v->a[19536] = actions(3);
	v->a[19537] = 1;
	v->a[19538] = sym_comment;
	v->a[19539] = actions(620);
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = 1;
	v->a[19541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19542] = actions(623);
	v->a[19543] = 1;
	v->a[19544] = anon_sym_DOLLAR;
	v->a[19545] = actions(626);
	v->a[19546] = 1;
	v->a[19547] = anon_sym_DQUOTE;
	v->a[19548] = actions(629);
	v->a[19549] = 1;
	v->a[19550] = anon_sym_DOLLAR_LBRACE;
	v->a[19551] = actions(632);
	v->a[19552] = 1;
	v->a[19553] = anon_sym_DOLLAR_LPAREN;
	v->a[19554] = actions(635);
	v->a[19555] = 1;
	v->a[19556] = anon_sym_BQUOTE;
	v->a[19557] = actions(613);
	v->a[19558] = 2;
	v->a[19559] = sym_variable_name;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = ts_builtin_sym_end;
	v->a[19561] = state(209);
	v->a[19562] = 2;
	v->a[19563] = sym_concatenation;
	v->a[19564] = aux_sym_for_statement_repeat1;
	v->a[19565] = actions(615);
	v->a[19566] = 3;
	v->a[19567] = sym_raw_string;
	v->a[19568] = sym_number;
	v->a[19569] = sym_word;
	v->a[19570] = state(337);
	v->a[19571] = 5;
	v->a[19572] = sym_arithmetic_expansion;
	v->a[19573] = sym_string;
	v->a[19574] = sym_simple_expansion;
	v->a[19575] = sym_expansion;
	v->a[19576] = sym_command_substitution;
	v->a[19577] = actions(618);
	v->a[19578] = 15;
	v->a[19579] = anon_sym_PIPE;
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = anon_sym_SEMI_SEMI;
	v->a[19581] = anon_sym_AMP_AMP;
	v->a[19582] = anon_sym_PIPE_PIPE;
	v->a[19583] = anon_sym_LT;
	v->a[19584] = anon_sym_GT;
	v->a[19585] = anon_sym_GT_GT;
	v->a[19586] = anon_sym_LT_AMP;
	v->a[19587] = anon_sym_GT_AMP;
	v->a[19588] = anon_sym_GT_PIPE;
	v->a[19589] = anon_sym_LT_GT;
	v->a[19590] = anon_sym_LT_LT;
	v->a[19591] = anon_sym_LT_LT_DASH;
	v->a[19592] = aux_sym_heredoc_redirect_token1;
	v->a[19593] = anon_sym_SEMI;
	v->a[19594] = 17;
	v->a[19595] = actions(407);
	v->a[19596] = 1;
	v->a[19597] = sym_comment;
	v->a[19598] = actions(409);
	v->a[19599] = 1;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
