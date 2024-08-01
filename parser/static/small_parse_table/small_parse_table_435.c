/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_435.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2175(t_small_parse_table_array *v)
{
	v->a[43500] = actions(1870);
	v->a[43501] = 1;
	v->a[43502] = aux_sym_heredoc_redirect_token1;
	v->a[43503] = state(377);
	v->a[43504] = 1;
	v->a[43505] = sym_terminator;
	v->a[43506] = actions(593);
	v->a[43507] = 2;
	v->a[43508] = anon_sym_SEMI_SEMI;
	v->a[43509] = anon_sym_SEMI;
	v->a[43510] = actions(595);
	v->a[43511] = 2;
	v->a[43512] = anon_sym_AMP_AMP;
	v->a[43513] = anon_sym_PIPE_PIPE;
	v->a[43514] = actions(1868);
	v->a[43515] = 3;
	v->a[43516] = anon_sym_LT;
	v->a[43517] = anon_sym_GT;
	v->a[43518] = anon_sym_GT_GT;
	v->a[43519] = state(916);
	small_parse_table_2176(v);
}

void	small_parse_table_2176(t_small_parse_table_array *v)
{
	v->a[43520] = 3;
	v->a[43521] = sym_file_redirect;
	v->a[43522] = sym_heredoc_redirect;
	v->a[43523] = aux_sym_redirected_statement_repeat1;
	v->a[43524] = 7;
	v->a[43525] = actions(3);
	v->a[43526] = 1;
	v->a[43527] = sym_comment;
	v->a[43528] = actions(937);
	v->a[43529] = 1;
	v->a[43530] = anon_sym_PERCENT;
	v->a[43531] = actions(1922);
	v->a[43532] = 1;
	v->a[43533] = anon_sym_RBRACE;
	v->a[43534] = state(1623);
	v->a[43535] = 1;
	v->a[43536] = sym__expansion_expression;
	v->a[43537] = state(1655);
	v->a[43538] = 1;
	v->a[43539] = sym__expansion_regex;
	small_parse_table_2177(v);
}

void	small_parse_table_2177(t_small_parse_table_array *v)
{
	v->a[43540] = actions(943);
	v->a[43541] = 3;
	v->a[43542] = sym__immediate_double_hash;
	v->a[43543] = anon_sym_POUND;
	v->a[43544] = anon_sym_PERCENT_PERCENT;
	v->a[43545] = actions(941);
	v->a[43546] = 8;
	v->a[43547] = anon_sym_COLON_DASH;
	v->a[43548] = anon_sym_DASH3;
	v->a[43549] = anon_sym_COLON_EQ;
	v->a[43550] = anon_sym_EQ2;
	v->a[43551] = anon_sym_COLON_QMARK;
	v->a[43552] = anon_sym_QMARK2;
	v->a[43553] = anon_sym_COLON_PLUS;
	v->a[43554] = anon_sym_PLUS3;
	v->a[43555] = 10;
	v->a[43556] = actions(3);
	v->a[43557] = 1;
	v->a[43558] = sym_comment;
	v->a[43559] = actions(580);
	small_parse_table_2178(v);
}

void	small_parse_table_2178(t_small_parse_table_array *v)
{
	v->a[43560] = 1;
	v->a[43561] = anon_sym_PIPE;
	v->a[43562] = actions(591);
	v->a[43563] = 1;
	v->a[43564] = anon_sym_RPAREN;
	v->a[43565] = actions(597);
	v->a[43566] = 1;
	v->a[43567] = anon_sym_LT_LT;
	v->a[43568] = actions(1870);
	v->a[43569] = 1;
	v->a[43570] = aux_sym_heredoc_redirect_token1;
	v->a[43571] = state(357);
	v->a[43572] = 1;
	v->a[43573] = sym_terminator;
	v->a[43574] = actions(593);
	v->a[43575] = 2;
	v->a[43576] = anon_sym_SEMI_SEMI;
	v->a[43577] = anon_sym_SEMI;
	v->a[43578] = actions(595);
	v->a[43579] = 2;
	small_parse_table_2179(v);
}

void	small_parse_table_2179(t_small_parse_table_array *v)
{
	v->a[43580] = anon_sym_AMP_AMP;
	v->a[43581] = anon_sym_PIPE_PIPE;
	v->a[43582] = actions(1868);
	v->a[43583] = 3;
	v->a[43584] = anon_sym_LT;
	v->a[43585] = anon_sym_GT;
	v->a[43586] = anon_sym_GT_GT;
	v->a[43587] = state(916);
	v->a[43588] = 3;
	v->a[43589] = sym_file_redirect;
	v->a[43590] = sym_heredoc_redirect;
	v->a[43591] = aux_sym_redirected_statement_repeat1;
	v->a[43592] = 10;
	v->a[43593] = actions(3);
	v->a[43594] = 1;
	v->a[43595] = sym_comment;
	v->a[43596] = actions(580);
	v->a[43597] = 1;
	v->a[43598] = anon_sym_PIPE;
	v->a[43599] = actions(591);
	small_parse_table_2180(v);
}

/* EOF small_parse_table_435.c */
