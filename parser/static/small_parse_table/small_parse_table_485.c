/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_485.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2425(t_small_parse_table_array *v)
{
	v->a[48500] = actions(3);
	v->a[48501] = 1;
	v->a[48502] = sym_comment;
	v->a[48503] = actions(1023);
	v->a[48504] = 3;
	v->a[48505] = sym_variable_name;
	v->a[48506] = ts_builtin_sym_end;
	v->a[48507] = aux_sym_heredoc_redirect_token1;
	v->a[48508] = actions(1025);
	v->a[48509] = 16;
	v->a[48510] = anon_sym_PIPE;
	v->a[48511] = anon_sym_RPAREN;
	v->a[48512] = anon_sym_SEMI_SEMI;
	v->a[48513] = anon_sym_AMP_AMP;
	v->a[48514] = anon_sym_PIPE_PIPE;
	v->a[48515] = anon_sym_LT;
	v->a[48516] = anon_sym_GT;
	v->a[48517] = anon_sym_GT_GT;
	v->a[48518] = anon_sym_LT_AMP;
	v->a[48519] = anon_sym_GT_AMP;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = anon_sym_GT_PIPE;
	v->a[48521] = anon_sym_LT_GT;
	v->a[48522] = anon_sym_LT_LT;
	v->a[48523] = anon_sym_LT_LT_DASH;
	v->a[48524] = anon_sym_BQUOTE;
	v->a[48525] = anon_sym_SEMI;
	v->a[48526] = 10;
	v->a[48527] = actions(3);
	v->a[48528] = 1;
	v->a[48529] = sym_comment;
	v->a[48530] = actions(746);
	v->a[48531] = 1;
	v->a[48532] = anon_sym_PIPE;
	v->a[48533] = actions(842);
	v->a[48534] = 1;
	v->a[48535] = anon_sym_SEMI_SEMI;
	v->a[48536] = actions(858);
	v->a[48537] = 1;
	v->a[48538] = anon_sym_SEMI;
	v->a[48539] = actions(1591);
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = 1;
	v->a[48541] = aux_sym_heredoc_redirect_token1;
	v->a[48542] = state(528);
	v->a[48543] = 1;
	v->a[48544] = sym_terminator;
	v->a[48545] = actions(850);
	v->a[48546] = 2;
	v->a[48547] = anon_sym_LT_LT;
	v->a[48548] = anon_sym_LT_LT_DASH;
	v->a[48549] = actions(898);
	v->a[48550] = 2;
	v->a[48551] = anon_sym_AMP_AMP;
	v->a[48552] = anon_sym_PIPE_PIPE;
	v->a[48553] = state(984);
	v->a[48554] = 3;
	v->a[48555] = sym_file_redirect;
	v->a[48556] = sym_heredoc_redirect;
	v->a[48557] = aux_sym_redirected_statement_repeat1;
	v->a[48558] = actions(1676);
	v->a[48559] = 7;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = anon_sym_LT;
	v->a[48561] = anon_sym_GT;
	v->a[48562] = anon_sym_GT_GT;
	v->a[48563] = anon_sym_LT_AMP;
	v->a[48564] = anon_sym_GT_AMP;
	v->a[48565] = anon_sym_GT_PIPE;
	v->a[48566] = anon_sym_LT_GT;
	v->a[48567] = 3;
	v->a[48568] = actions(3);
	v->a[48569] = 1;
	v->a[48570] = sym_comment;
	v->a[48571] = actions(445);
	v->a[48572] = 2;
	v->a[48573] = sym__concat;
	v->a[48574] = sym_variable_name;
	v->a[48575] = actions(443);
	v->a[48576] = 17;
	v->a[48577] = anon_sym_LT;
	v->a[48578] = anon_sym_GT;
	v->a[48579] = anon_sym_GT_GT;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = anon_sym_LT_AMP;
	v->a[48581] = anon_sym_GT_AMP;
	v->a[48582] = anon_sym_GT_PIPE;
	v->a[48583] = anon_sym_LT_GT;
	v->a[48584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48585] = aux_sym_concatenation_token1;
	v->a[48586] = anon_sym_DOLLAR;
	v->a[48587] = anon_sym_DQUOTE;
	v->a[48588] = sym_raw_string;
	v->a[48589] = sym_number;
	v->a[48590] = anon_sym_DOLLAR_LBRACE;
	v->a[48591] = anon_sym_DOLLAR_LPAREN;
	v->a[48592] = anon_sym_BQUOTE;
	v->a[48593] = sym_word;
	v->a[48594] = 3;
	v->a[48595] = actions(3);
	v->a[48596] = 1;
	v->a[48597] = sym_comment;
	v->a[48598] = actions(473);
	v->a[48599] = 2;
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
