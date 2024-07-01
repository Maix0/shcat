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
	v->a[19500] = 9;
	v->a[19501] = anon_sym_BANG;
	v->a[19502] = anon_sym_DASH;
	v->a[19503] = anon_sym_STAR;
	v->a[19504] = anon_sym_QMARK;
	v->a[19505] = anon_sym_DOLLAR;
	v->a[19506] = anon_sym_POUND;
	v->a[19507] = anon_sym_AT;
	v->a[19508] = anon_sym_0;
	v->a[19509] = anon_sym__;
	v->a[19510] = actions(361);
	v->a[19511] = 22;
	v->a[19512] = anon_sym_LPAREN;
	v->a[19513] = anon_sym_PIPE;
	v->a[19514] = anon_sym_AMP_AMP;
	v->a[19515] = anon_sym_PIPE_PIPE;
	v->a[19516] = anon_sym_LT;
	v->a[19517] = anon_sym_GT;
	v->a[19518] = anon_sym_GT_GT;
	v->a[19519] = anon_sym_LT_AMP;
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = anon_sym_GT_AMP;
	v->a[19521] = anon_sym_GT_PIPE;
	v->a[19522] = anon_sym_LT_GT;
	v->a[19523] = anon_sym_LT_LT;
	v->a[19524] = anon_sym_LT_LT_DASH;
	v->a[19525] = aux_sym_heredoc_redirect_token1;
	v->a[19526] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19527] = anon_sym_DQUOTE;
	v->a[19528] = sym_raw_string;
	v->a[19529] = sym_number;
	v->a[19530] = anon_sym_DOLLAR_LBRACE;
	v->a[19531] = anon_sym_DOLLAR_LPAREN;
	v->a[19532] = anon_sym_BQUOTE;
	v->a[19533] = sym_word;
	v->a[19534] = 16;
	v->a[19535] = actions(3);
	v->a[19536] = 1;
	v->a[19537] = sym_comment;
	v->a[19538] = actions(17);
	v->a[19539] = 1;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_LPAREN;
	v->a[19541] = actions(459);
	v->a[19542] = 1;
	v->a[19543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19544] = actions(461);
	v->a[19545] = 1;
	v->a[19546] = anon_sym_DOLLAR;
	v->a[19547] = actions(463);
	v->a[19548] = 1;
	v->a[19549] = anon_sym_DQUOTE;
	v->a[19550] = actions(465);
	v->a[19551] = 1;
	v->a[19552] = anon_sym_DOLLAR_LBRACE;
	v->a[19553] = actions(467);
	v->a[19554] = 1;
	v->a[19555] = anon_sym_DOLLAR_LPAREN;
	v->a[19556] = actions(469);
	v->a[19557] = 1;
	v->a[19558] = anon_sym_BQUOTE;
	v->a[19559] = actions(471);
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = 1;
	v->a[19561] = sym__bare_dollar;
	v->a[19562] = actions(473);
	v->a[19563] = 1;
	v->a[19564] = sym_file_descriptor;
	v->a[19565] = state(243);
	v->a[19566] = 1;
	v->a[19567] = aux_sym_command_repeat2;
	v->a[19568] = state(627);
	v->a[19569] = 1;
	v->a[19570] = sym_concatenation;
	v->a[19571] = state(1116);
	v->a[19572] = 1;
	v->a[19573] = sym_subshell;
	v->a[19574] = actions(493);
	v->a[19575] = 3;
	v->a[19576] = sym_raw_string;
	v->a[19577] = sym_number;
	v->a[19578] = sym_word;
	v->a[19579] = state(469);
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = 5;
	v->a[19581] = sym_arithmetic_expansion;
	v->a[19582] = sym_string;
	v->a[19583] = sym_simple_expansion;
	v->a[19584] = sym_expansion;
	v->a[19585] = sym_command_substitution;
	v->a[19586] = actions(475);
	v->a[19587] = 16;
	v->a[19588] = anon_sym_PIPE;
	v->a[19589] = anon_sym_SEMI_SEMI;
	v->a[19590] = anon_sym_AMP_AMP;
	v->a[19591] = anon_sym_PIPE_PIPE;
	v->a[19592] = anon_sym_LT;
	v->a[19593] = anon_sym_GT;
	v->a[19594] = anon_sym_GT_GT;
	v->a[19595] = anon_sym_LT_AMP;
	v->a[19596] = anon_sym_GT_AMP;
	v->a[19597] = anon_sym_GT_PIPE;
	v->a[19598] = anon_sym_LT_GT;
	v->a[19599] = anon_sym_LT_LT;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
