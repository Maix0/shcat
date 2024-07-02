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
	v->a[19500] = 1;
	v->a[19501] = anon_sym_DOLLAR;
	v->a[19502] = actions(467);
	v->a[19503] = 1;
	v->a[19504] = anon_sym_DQUOTE;
	v->a[19505] = actions(469);
	v->a[19506] = 1;
	v->a[19507] = anon_sym_DOLLAR_LBRACE;
	v->a[19508] = actions(471);
	v->a[19509] = 1;
	v->a[19510] = anon_sym_DOLLAR_LPAREN;
	v->a[19511] = actions(475);
	v->a[19512] = 1;
	v->a[19513] = sym__bare_dollar;
	v->a[19514] = state(206);
	v->a[19515] = 1;
	v->a[19516] = aux_sym_command_repeat2;
	v->a[19517] = state(662);
	v->a[19518] = 1;
	v->a[19519] = sym_concatenation;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = state(1169);
	v->a[19521] = 1;
	v->a[19522] = sym_subshell;
	v->a[19523] = actions(493);
	v->a[19524] = 3;
	v->a[19525] = sym_raw_string;
	v->a[19526] = sym_number;
	v->a[19527] = sym_word;
	v->a[19528] = state(490);
	v->a[19529] = 5;
	v->a[19530] = sym_arithmetic_expansion;
	v->a[19531] = sym_string;
	v->a[19532] = sym_simple_expansion;
	v->a[19533] = sym_expansion;
	v->a[19534] = sym_command_substitution;
	v->a[19535] = actions(439);
	v->a[19536] = 17;
	v->a[19537] = anon_sym_PIPE;
	v->a[19538] = anon_sym_SEMI_SEMI;
	v->a[19539] = anon_sym_AMP_AMP;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_PIPE_PIPE;
	v->a[19541] = anon_sym_LT;
	v->a[19542] = anon_sym_GT;
	v->a[19543] = anon_sym_GT_GT;
	v->a[19544] = anon_sym_LT_AMP;
	v->a[19545] = anon_sym_GT_AMP;
	v->a[19546] = anon_sym_GT_PIPE;
	v->a[19547] = anon_sym_LT_GT;
	v->a[19548] = anon_sym_LT_LT;
	v->a[19549] = anon_sym_LT_LT_DASH;
	v->a[19550] = aux_sym_heredoc_redirect_token1;
	v->a[19551] = anon_sym_AMP;
	v->a[19552] = anon_sym_BQUOTE;
	v->a[19553] = anon_sym_SEMI;
	v->a[19554] = 6;
	v->a[19555] = actions(3);
	v->a[19556] = 1;
	v->a[19557] = sym_comment;
	v->a[19558] = actions(381);
	v->a[19559] = 1;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = sym_variable_name;
	v->a[19561] = actions(361);
	v->a[19562] = 2;
	v->a[19563] = sym_file_descriptor;
	v->a[19564] = sym__bare_dollar;
	v->a[19565] = actions(379);
	v->a[19566] = 2;
	v->a[19567] = aux_sym__simple_variable_name_token1;
	v->a[19568] = aux_sym__multiline_variable_name_token1;
	v->a[19569] = actions(377);
	v->a[19570] = 9;
	v->a[19571] = anon_sym_BANG;
	v->a[19572] = anon_sym_DASH;
	v->a[19573] = anon_sym_STAR;
	v->a[19574] = anon_sym_QMARK;
	v->a[19575] = anon_sym_DOLLAR;
	v->a[19576] = anon_sym_POUND;
	v->a[19577] = anon_sym_AT;
	v->a[19578] = anon_sym_0;
	v->a[19579] = anon_sym__;
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = actions(363);
	v->a[19581] = 22;
	v->a[19582] = anon_sym_LPAREN;
	v->a[19583] = anon_sym_PIPE;
	v->a[19584] = anon_sym_AMP_AMP;
	v->a[19585] = anon_sym_PIPE_PIPE;
	v->a[19586] = anon_sym_LT;
	v->a[19587] = anon_sym_GT;
	v->a[19588] = anon_sym_GT_GT;
	v->a[19589] = anon_sym_LT_AMP;
	v->a[19590] = anon_sym_GT_AMP;
	v->a[19591] = anon_sym_GT_PIPE;
	v->a[19592] = anon_sym_LT_GT;
	v->a[19593] = anon_sym_LT_LT;
	v->a[19594] = anon_sym_LT_LT_DASH;
	v->a[19595] = aux_sym_heredoc_redirect_token1;
	v->a[19596] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19597] = anon_sym_DQUOTE;
	v->a[19598] = sym_raw_string;
	v->a[19599] = sym_number;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
