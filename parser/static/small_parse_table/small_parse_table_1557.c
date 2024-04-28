/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1557.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7785(t_small_parse_table_array *v)
{
	v->a[155700] = sym_expansion;
	v->a[155701] = sym_command_substitution;
	v->a[155702] = sym_process_substitution;
	v->a[155703] = 4;
	v->a[155704] = actions(71);
	v->a[155705] = 1;
	v->a[155706] = sym_comment;
	v->a[155707] = actions(7242);
	v->a[155708] = 1;
	v->a[155709] = anon_sym_LBRACK;
	v->a[155710] = actions(6600);
	v->a[155711] = 14;
	v->a[155712] = anon_sym_EQ;
	v->a[155713] = anon_sym_PIPE;
	v->a[155714] = anon_sym_CARET;
	v->a[155715] = anon_sym_AMP;
	v->a[155716] = anon_sym_LT;
	v->a[155717] = anon_sym_GT;
	v->a[155718] = anon_sym_LT_LT;
	v->a[155719] = anon_sym_GT_GT;
	small_parse_table_7786(v);
}

void	small_parse_table_7786(t_small_parse_table_array *v)
{
	v->a[155720] = anon_sym_PLUS;
	v->a[155721] = anon_sym_DASH;
	v->a[155722] = anon_sym_STAR;
	v->a[155723] = anon_sym_SLASH;
	v->a[155724] = anon_sym_PERCENT;
	v->a[155725] = anon_sym_STAR_STAR;
	v->a[155726] = actions(6598);
	v->a[155727] = 22;
	v->a[155728] = anon_sym_PLUS_PLUS;
	v->a[155729] = anon_sym_DASH_DASH;
	v->a[155730] = anon_sym_PLUS_EQ;
	v->a[155731] = anon_sym_DASH_EQ;
	v->a[155732] = anon_sym_STAR_EQ;
	v->a[155733] = anon_sym_SLASH_EQ;
	v->a[155734] = anon_sym_PERCENT_EQ;
	v->a[155735] = anon_sym_STAR_STAR_EQ;
	v->a[155736] = anon_sym_LT_LT_EQ;
	v->a[155737] = anon_sym_GT_GT_EQ;
	v->a[155738] = anon_sym_AMP_EQ;
	v->a[155739] = anon_sym_CARET_EQ;
	small_parse_table_7787(v);
}

void	small_parse_table_7787(t_small_parse_table_array *v)
{
	v->a[155740] = anon_sym_PIPE_EQ;
	v->a[155741] = anon_sym_PIPE_PIPE;
	v->a[155742] = anon_sym_AMP_AMP;
	v->a[155743] = anon_sym_EQ_EQ;
	v->a[155744] = anon_sym_BANG_EQ;
	v->a[155745] = anon_sym_LT_EQ;
	v->a[155746] = anon_sym_GT_EQ;
	v->a[155747] = anon_sym_RPAREN;
	v->a[155748] = anon_sym_EQ_TILDE;
	v->a[155749] = anon_sym_QMARK;
	v->a[155750] = 3;
	v->a[155751] = actions(3);
	v->a[155752] = 1;
	v->a[155753] = sym_comment;
	v->a[155754] = actions(7246);
	v->a[155755] = 1;
	v->a[155756] = aux_sym_heredoc_redirect_token1;
	v->a[155757] = actions(7244);
	v->a[155758] = 36;
	v->a[155759] = anon_sym_SEMI;
	small_parse_table_7788(v);
}

void	small_parse_table_7788(t_small_parse_table_array *v)
{
	v->a[155760] = anon_sym_COMMA;
	v->a[155761] = anon_sym_PLUS_PLUS;
	v->a[155762] = anon_sym_DASH_DASH;
	v->a[155763] = anon_sym_PLUS_EQ;
	v->a[155764] = anon_sym_DASH_EQ;
	v->a[155765] = anon_sym_STAR_EQ;
	v->a[155766] = anon_sym_SLASH_EQ;
	v->a[155767] = anon_sym_PERCENT_EQ;
	v->a[155768] = anon_sym_STAR_STAR_EQ;
	v->a[155769] = anon_sym_LT_LT_EQ;
	v->a[155770] = anon_sym_GT_GT_EQ;
	v->a[155771] = anon_sym_AMP_EQ;
	v->a[155772] = anon_sym_CARET_EQ;
	v->a[155773] = anon_sym_PIPE_EQ;
	v->a[155774] = anon_sym_PIPE_PIPE;
	v->a[155775] = anon_sym_DASHo;
	v->a[155776] = anon_sym_AMP_AMP;
	v->a[155777] = anon_sym_DASHa;
	v->a[155778] = anon_sym_PIPE;
	v->a[155779] = anon_sym_CARET;
	small_parse_table_7789(v);
}

void	small_parse_table_7789(t_small_parse_table_array *v)
{
	v->a[155780] = anon_sym_AMP;
	v->a[155781] = anon_sym_EQ_EQ;
	v->a[155782] = anon_sym_BANG_EQ;
	v->a[155783] = anon_sym_LT;
	v->a[155784] = anon_sym_GT;
	v->a[155785] = anon_sym_LT_EQ;
	v->a[155786] = anon_sym_GT_EQ;
	v->a[155787] = anon_sym_LT_LT;
	v->a[155788] = anon_sym_GT_GT;
	v->a[155789] = anon_sym_PLUS;
	v->a[155790] = anon_sym_DASH;
	v->a[155791] = anon_sym_STAR;
	v->a[155792] = anon_sym_SLASH;
	v->a[155793] = anon_sym_PERCENT;
	v->a[155794] = anon_sym_STAR_STAR;
	v->a[155795] = 15;
	v->a[155796] = actions(3);
	v->a[155797] = 1;
	v->a[155798] = sym_comment;
	v->a[155799] = actions(7256);
	small_parse_table_7790(v);
}

/* EOF small_parse_table_1557.c */
