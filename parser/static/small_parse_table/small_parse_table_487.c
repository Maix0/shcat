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
	v->a[48700] = 1;
	v->a[48701] = sym_variable_name;
	v->a[48702] = actions(1670);
	v->a[48703] = 2;
	v->a[48704] = aux_sym__simple_variable_name_token1;
	v->a[48705] = aux_sym__multiline_variable_name_token1;
	v->a[48706] = actions(1668);
	v->a[48707] = 9;
	v->a[48708] = anon_sym_BANG;
	v->a[48709] = anon_sym_DASH;
	v->a[48710] = anon_sym_STAR;
	v->a[48711] = anon_sym_QMARK;
	v->a[48712] = anon_sym_DOLLAR;
	v->a[48713] = anon_sym_POUND;
	v->a[48714] = anon_sym_AT;
	v->a[48715] = anon_sym_0;
	v->a[48716] = anon_sym__;
	v->a[48717] = actions(407);
	v->a[48718] = 19;
	v->a[48719] = anon_sym_PIPE;
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = anon_sym_SEMI_SEMI;
	v->a[48721] = anon_sym_AMP_AMP;
	v->a[48722] = anon_sym_PIPE_PIPE;
	v->a[48723] = anon_sym_LT;
	v->a[48724] = anon_sym_GT;
	v->a[48725] = anon_sym_GT_GT;
	v->a[48726] = anon_sym_AMP_GT;
	v->a[48727] = anon_sym_AMP_GT_GT;
	v->a[48728] = anon_sym_LT_AMP;
	v->a[48729] = anon_sym_GT_AMP;
	v->a[48730] = anon_sym_GT_PIPE;
	v->a[48731] = anon_sym_LT_AMP_DASH;
	v->a[48732] = anon_sym_GT_AMP_DASH;
	v->a[48733] = anon_sym_LT_LT;
	v->a[48734] = anon_sym_LT_LT_DASH;
	v->a[48735] = aux_sym_heredoc_redirect_token1;
	v->a[48736] = anon_sym_AMP;
	v->a[48737] = anon_sym_SEMI;
	v->a[48738] = 7;
	v->a[48739] = actions(3);
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = 1;
	v->a[48741] = sym_comment;
	v->a[48742] = actions(1706);
	v->a[48743] = 1;
	v->a[48744] = sym_file_descriptor;
	v->a[48745] = actions(1709);
	v->a[48746] = 1;
	v->a[48747] = sym_variable_name;
	v->a[48748] = actions(1739);
	v->a[48749] = 1;
	v->a[48750] = anon_sym_RPAREN;
	v->a[48751] = actions(1698);
	v->a[48752] = 9;
	v->a[48753] = anon_sym_PIPE;
	v->a[48754] = anon_sym_SEMI_SEMI;
	v->a[48755] = anon_sym_AMP_AMP;
	v->a[48756] = anon_sym_PIPE_PIPE;
	v->a[48757] = anon_sym_LT_LT;
	v->a[48758] = anon_sym_LT_LT_DASH;
	v->a[48759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = anon_sym_AMP;
	v->a[48761] = anon_sym_SEMI;
	v->a[48762] = actions(1696);
	v->a[48763] = 10;
	v->a[48764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48765] = anon_sym_DOLLAR;
	v->a[48766] = anon_sym_DQUOTE;
	v->a[48767] = sym_raw_string;
	v->a[48768] = aux_sym_number_token1;
	v->a[48769] = aux_sym_number_token2;
	v->a[48770] = anon_sym_DOLLAR_LBRACE;
	v->a[48771] = anon_sym_DOLLAR_LPAREN;
	v->a[48772] = anon_sym_BQUOTE;
	v->a[48773] = sym_word;
	v->a[48774] = actions(1703);
	v->a[48775] = 10;
	v->a[48776] = anon_sym_LT;
	v->a[48777] = anon_sym_GT;
	v->a[48778] = anon_sym_GT_GT;
	v->a[48779] = anon_sym_AMP_GT;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = anon_sym_AMP_GT_GT;
	v->a[48781] = anon_sym_LT_AMP;
	v->a[48782] = anon_sym_GT_AMP;
	v->a[48783] = anon_sym_GT_PIPE;
	v->a[48784] = anon_sym_LT_AMP_DASH;
	v->a[48785] = anon_sym_GT_AMP_DASH;
	v->a[48786] = 7;
	v->a[48787] = actions(3);
	v->a[48788] = 1;
	v->a[48789] = sym_comment;
	v->a[48790] = actions(1706);
	v->a[48791] = 1;
	v->a[48792] = sym_file_descriptor;
	v->a[48793] = actions(1709);
	v->a[48794] = 1;
	v->a[48795] = sym_variable_name;
	v->a[48796] = actions(1742);
	v->a[48797] = 1;
	v->a[48798] = ts_builtin_sym_end;
	v->a[48799] = actions(1698);
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */
