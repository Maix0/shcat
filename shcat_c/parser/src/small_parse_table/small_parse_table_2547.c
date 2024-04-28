/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2547.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12735(t_small_parse_table_array *v)
{
	v->a[254700] = anon_sym_SEMI;
	v->a[254701] = anon_sym_PIPE_PIPE;
	v->a[254702] = anon_sym_AMP_AMP;
	v->a[254703] = anon_sym_PIPE;
	v->a[254704] = anon_sym_AMP;
	v->a[254705] = anon_sym_LT;
	v->a[254706] = anon_sym_GT;
	v->a[254707] = anon_sym_LT_LT;
	v->a[254708] = anon_sym_GT_GT;
	v->a[254709] = anon_sym_SEMI_SEMI;
	v->a[254710] = anon_sym_PIPE_AMP;
	v->a[254711] = anon_sym_AMP_GT;
	v->a[254712] = anon_sym_AMP_GT_GT;
	v->a[254713] = anon_sym_LT_AMP;
	v->a[254714] = anon_sym_GT_AMP;
	v->a[254715] = anon_sym_GT_PIPE;
	v->a[254716] = anon_sym_LT_AMP_DASH;
	v->a[254717] = anon_sym_GT_AMP_DASH;
	v->a[254718] = anon_sym_LT_LT_DASH;
	v->a[254719] = anon_sym_BQUOTE;
	small_parse_table_12736(v);
}

void	small_parse_table_12736(t_small_parse_table_array *v)
{
	v->a[254720] = 6;
	v->a[254721] = actions(3);
	v->a[254722] = 1;
	v->a[254723] = sym_comment;
	v->a[254724] = actions(11512);
	v->a[254725] = 1;
	v->a[254726] = aux_sym_concatenation_token1;
	v->a[254727] = actions(11514);
	v->a[254728] = 1;
	v->a[254729] = sym__concat;
	v->a[254730] = state(4510);
	v->a[254731] = 1;
	v->a[254732] = aux_sym_concatenation_repeat1;
	v->a[254733] = actions(4554);
	v->a[254734] = 3;
	v->a[254735] = sym_file_descriptor;
	v->a[254736] = ts_builtin_sym_end;
	v->a[254737] = aux_sym_heredoc_redirect_token1;
	v->a[254738] = actions(4552);
	v->a[254739] = 20;
	small_parse_table_12737(v);
}

void	small_parse_table_12737(t_small_parse_table_array *v)
{
	v->a[254740] = anon_sym_SEMI;
	v->a[254741] = anon_sym_PIPE_PIPE;
	v->a[254742] = anon_sym_AMP_AMP;
	v->a[254743] = anon_sym_PIPE;
	v->a[254744] = anon_sym_AMP;
	v->a[254745] = anon_sym_LT;
	v->a[254746] = anon_sym_GT;
	v->a[254747] = anon_sym_LT_LT;
	v->a[254748] = anon_sym_GT_GT;
	v->a[254749] = anon_sym_SEMI_SEMI;
	v->a[254750] = anon_sym_PIPE_AMP;
	v->a[254751] = anon_sym_AMP_GT;
	v->a[254752] = anon_sym_AMP_GT_GT;
	v->a[254753] = anon_sym_LT_AMP;
	v->a[254754] = anon_sym_GT_AMP;
	v->a[254755] = anon_sym_GT_PIPE;
	v->a[254756] = anon_sym_LT_AMP_DASH;
	v->a[254757] = anon_sym_GT_AMP_DASH;
	v->a[254758] = anon_sym_LT_LT_DASH;
	v->a[254759] = anon_sym_LT_LT_LT;
	small_parse_table_12738(v);
}

void	small_parse_table_12738(t_small_parse_table_array *v)
{
	v->a[254760] = 3;
	v->a[254761] = actions(3);
	v->a[254762] = 1;
	v->a[254763] = sym_comment;
	v->a[254764] = actions(6820);
	v->a[254765] = 5;
	v->a[254766] = anon_sym_COMMA;
	v->a[254767] = anon_sym_CARET;
	v->a[254768] = anon_sym_SLASH;
	v->a[254769] = anon_sym_PERCENT;
	v->a[254770] = anon_sym_COLON;
	v->a[254771] = actions(6818);
	v->a[254772] = 21;
	v->a[254773] = sym__immediate_double_hash;
	v->a[254774] = sym__external_expansion_sym_hash;
	v->a[254775] = sym__external_expansion_sym_bang;
	v->a[254776] = sym__external_expansion_sym_equal;
	v->a[254777] = anon_sym_POUND;
	v->a[254778] = anon_sym_RBRACE3;
	v->a[254779] = anon_sym_AT;
	small_parse_table_12739(v);
}

void	small_parse_table_12739(t_small_parse_table_array *v)
{
	v->a[254780] = anon_sym_EQ2;
	v->a[254781] = anon_sym_COLON_EQ;
	v->a[254782] = anon_sym_DASH3;
	v->a[254783] = anon_sym_COLON_DASH;
	v->a[254784] = anon_sym_PLUS3;
	v->a[254785] = anon_sym_COLON_PLUS;
	v->a[254786] = anon_sym_QMARK2;
	v->a[254787] = anon_sym_COLON_QMARK;
	v->a[254788] = anon_sym_PERCENT_PERCENT;
	v->a[254789] = anon_sym_SLASH_SLASH;
	v->a[254790] = anon_sym_SLASH_POUND;
	v->a[254791] = anon_sym_SLASH_PERCENT;
	v->a[254792] = anon_sym_COMMA_COMMA;
	v->a[254793] = anon_sym_CARET_CARET;
	v->a[254794] = 3;
	v->a[254795] = actions(3);
	v->a[254796] = 1;
	v->a[254797] = sym_comment;
	v->a[254798] = actions(1350);
	v->a[254799] = 4;
	small_parse_table_12740(v);
}

/* EOF small_parse_table_2547.c */
