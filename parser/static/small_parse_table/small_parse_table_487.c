/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_487.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2435(t_small_parse_table_array *v)
{
	v->a[48700] = state(918);
	v->a[48701] = 3;
	v->a[48702] = sym_file_redirect;
	v->a[48703] = sym_heredoc_redirect;
	v->a[48704] = aux_sym_redirected_statement_repeat1;
	v->a[48705] = actions(1597);
	v->a[48706] = 7;
	v->a[48707] = anon_sym_LT;
	v->a[48708] = anon_sym_GT;
	v->a[48709] = anon_sym_GT_GT;
	v->a[48710] = anon_sym_LT_AMP;
	v->a[48711] = anon_sym_GT_AMP;
	v->a[48712] = anon_sym_GT_PIPE;
	v->a[48713] = anon_sym_LT_GT;
	v->a[48714] = 10;
	v->a[48715] = actions(3);
	v->a[48716] = 1;
	v->a[48717] = sym_comment;
	v->a[48718] = actions(746);
	v->a[48719] = 1;
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = anon_sym_PIPE;
	v->a[48721] = actions(842);
	v->a[48722] = 1;
	v->a[48723] = anon_sym_SEMI_SEMI;
	v->a[48724] = actions(858);
	v->a[48725] = 1;
	v->a[48726] = anon_sym_SEMI;
	v->a[48727] = actions(1591);
	v->a[48728] = 1;
	v->a[48729] = aux_sym_heredoc_redirect_token1;
	v->a[48730] = state(527);
	v->a[48731] = 1;
	v->a[48732] = sym_terminator;
	v->a[48733] = actions(850);
	v->a[48734] = 2;
	v->a[48735] = anon_sym_LT_LT;
	v->a[48736] = anon_sym_LT_LT_DASH;
	v->a[48737] = actions(898);
	v->a[48738] = 2;
	v->a[48739] = anon_sym_AMP_AMP;
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = anon_sym_PIPE_PIPE;
	v->a[48741] = state(984);
	v->a[48742] = 3;
	v->a[48743] = sym_file_redirect;
	v->a[48744] = sym_heredoc_redirect;
	v->a[48745] = aux_sym_redirected_statement_repeat1;
	v->a[48746] = actions(1676);
	v->a[48747] = 7;
	v->a[48748] = anon_sym_LT;
	v->a[48749] = anon_sym_GT;
	v->a[48750] = anon_sym_GT_GT;
	v->a[48751] = anon_sym_LT_AMP;
	v->a[48752] = anon_sym_GT_AMP;
	v->a[48753] = anon_sym_GT_PIPE;
	v->a[48754] = anon_sym_LT_GT;
	v->a[48755] = 3;
	v->a[48756] = actions(3);
	v->a[48757] = 1;
	v->a[48758] = sym_comment;
	v->a[48759] = actions(1147);
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = 2;
	v->a[48761] = sym__concat;
	v->a[48762] = sym_variable_name;
	v->a[48763] = actions(1145);
	v->a[48764] = 17;
	v->a[48765] = anon_sym_LT;
	v->a[48766] = anon_sym_GT;
	v->a[48767] = anon_sym_GT_GT;
	v->a[48768] = anon_sym_LT_AMP;
	v->a[48769] = anon_sym_GT_AMP;
	v->a[48770] = anon_sym_GT_PIPE;
	v->a[48771] = anon_sym_LT_GT;
	v->a[48772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48773] = aux_sym_concatenation_token1;
	v->a[48774] = anon_sym_DOLLAR;
	v->a[48775] = anon_sym_DQUOTE;
	v->a[48776] = sym_raw_string;
	v->a[48777] = sym_number;
	v->a[48778] = anon_sym_DOLLAR_LBRACE;
	v->a[48779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = anon_sym_BQUOTE;
	v->a[48781] = sym_word;
	v->a[48782] = 3;
	v->a[48783] = actions(3);
	v->a[48784] = 1;
	v->a[48785] = sym_comment;
	v->a[48786] = actions(1167);
	v->a[48787] = 2;
	v->a[48788] = sym__concat;
	v->a[48789] = sym_variable_name;
	v->a[48790] = actions(1169);
	v->a[48791] = 17;
	v->a[48792] = anon_sym_LT;
	v->a[48793] = anon_sym_GT;
	v->a[48794] = anon_sym_GT_GT;
	v->a[48795] = anon_sym_LT_AMP;
	v->a[48796] = anon_sym_GT_AMP;
	v->a[48797] = anon_sym_GT_PIPE;
	v->a[48798] = anon_sym_LT_GT;
	v->a[48799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */
