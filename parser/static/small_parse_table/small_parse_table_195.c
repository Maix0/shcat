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
	v->a[19500] = anon_sym_LT_LT;
	v->a[19501] = anon_sym_LT_LT_DASH;
	v->a[19502] = aux_sym_heredoc_redirect_token1;
	v->a[19503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19504] = anon_sym_DQUOTE;
	v->a[19505] = sym_raw_string;
	v->a[19506] = sym_number;
	v->a[19507] = anon_sym_DOLLAR_LBRACE;
	v->a[19508] = anon_sym_DOLLAR_LPAREN;
	v->a[19509] = anon_sym_BQUOTE;
	v->a[19510] = sym_word;
	v->a[19511] = anon_sym_SEMI;
	v->a[19512] = 6;
	v->a[19513] = actions(3);
	v->a[19514] = 1;
	v->a[19515] = sym_comment;
	v->a[19516] = actions(369);
	v->a[19517] = 1;
	v->a[19518] = sym_variable_name;
	v->a[19519] = actions(365);
	small_parse_table_976(v);
}

void	small_parse_table_976(t_small_parse_table_array *v)
{
	v->a[19520] = 2;
	v->a[19521] = aux_sym__simple_variable_name_token1;
	v->a[19522] = aux_sym__multiline_variable_name_token1;
	v->a[19523] = actions(367);
	v->a[19524] = 2;
	v->a[19525] = sym_file_descriptor;
	v->a[19526] = sym__bare_dollar;
	v->a[19527] = actions(363);
	v->a[19528] = 8;
	v->a[19529] = anon_sym_BANG;
	v->a[19530] = anon_sym_DASH;
	v->a[19531] = anon_sym_STAR;
	v->a[19532] = anon_sym_QMARK;
	v->a[19533] = anon_sym_DOLLAR;
	v->a[19534] = anon_sym_POUND;
	v->a[19535] = anon_sym_AT;
	v->a[19536] = anon_sym_0;
	v->a[19537] = actions(361);
	v->a[19538] = 22;
	v->a[19539] = anon_sym_LPAREN;
	small_parse_table_977(v);
}

void	small_parse_table_977(t_small_parse_table_array *v)
{
	v->a[19540] = anon_sym_PIPE;
	v->a[19541] = anon_sym_AMP_AMP;
	v->a[19542] = anon_sym_PIPE_PIPE;
	v->a[19543] = anon_sym_LT;
	v->a[19544] = anon_sym_GT;
	v->a[19545] = anon_sym_GT_GT;
	v->a[19546] = anon_sym_LT_AMP;
	v->a[19547] = anon_sym_GT_AMP;
	v->a[19548] = anon_sym_GT_PIPE;
	v->a[19549] = anon_sym_LT_GT;
	v->a[19550] = anon_sym_LT_LT;
	v->a[19551] = anon_sym_LT_LT_DASH;
	v->a[19552] = aux_sym_heredoc_redirect_token1;
	v->a[19553] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19554] = anon_sym_DQUOTE;
	v->a[19555] = sym_raw_string;
	v->a[19556] = sym_number;
	v->a[19557] = anon_sym_DOLLAR_LBRACE;
	v->a[19558] = anon_sym_DOLLAR_LPAREN;
	v->a[19559] = anon_sym_BQUOTE;
	small_parse_table_978(v);
}

void	small_parse_table_978(t_small_parse_table_array *v)
{
	v->a[19560] = sym_word;
	v->a[19561] = 16;
	v->a[19562] = actions(3);
	v->a[19563] = 1;
	v->a[19564] = sym_comment;
	v->a[19565] = actions(17);
	v->a[19566] = 1;
	v->a[19567] = anon_sym_LPAREN;
	v->a[19568] = actions(405);
	v->a[19569] = 1;
	v->a[19570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19571] = actions(407);
	v->a[19572] = 1;
	v->a[19573] = anon_sym_DOLLAR;
	v->a[19574] = actions(409);
	v->a[19575] = 1;
	v->a[19576] = anon_sym_DQUOTE;
	v->a[19577] = actions(411);
	v->a[19578] = 1;
	v->a[19579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_979(v);
}

void	small_parse_table_979(t_small_parse_table_array *v)
{
	v->a[19580] = actions(413);
	v->a[19581] = 1;
	v->a[19582] = anon_sym_DOLLAR_LPAREN;
	v->a[19583] = actions(415);
	v->a[19584] = 1;
	v->a[19585] = anon_sym_BQUOTE;
	v->a[19586] = actions(417);
	v->a[19587] = 1;
	v->a[19588] = sym_file_descriptor;
	v->a[19589] = actions(419);
	v->a[19590] = 1;
	v->a[19591] = sym__bare_dollar;
	v->a[19592] = state(254);
	v->a[19593] = 1;
	v->a[19594] = aux_sym_command_repeat2;
	v->a[19595] = state(674);
	v->a[19596] = 1;
	v->a[19597] = sym_concatenation;
	v->a[19598] = state(1181);
	v->a[19599] = 1;
	small_parse_table_980(v);
}

/* EOF small_parse_table_195.c */
