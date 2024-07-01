/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_238.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1190(t_small_parse_table_array *v)
{
	v->a[23800] = 2;
	v->a[23801] = anon_sym_AMP_AMP;
	v->a[23802] = anon_sym_PIPE_PIPE;
	v->a[23803] = state(1065);
	v->a[23804] = 2;
	v->a[23805] = sym_variable_assignment;
	v->a[23806] = aux_sym__variable_assignments_repeat1;
	v->a[23807] = state(1073);
	v->a[23808] = 3;
	v->a[23809] = sym_file_redirect;
	v->a[23810] = sym_heredoc_redirect;
	v->a[23811] = aux_sym_redirected_statement_repeat1;
	v->a[23812] = actions(806);
	v->a[23813] = 4;
	v->a[23814] = anon_sym_SEMI_SEMI;
	v->a[23815] = aux_sym_heredoc_redirect_token1;
	v->a[23816] = anon_sym_AMP;
	v->a[23817] = anon_sym_SEMI;
	v->a[23818] = actions(734);
	v->a[23819] = 16;
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = anon_sym_LT;
	v->a[23821] = anon_sym_GT;
	v->a[23822] = anon_sym_GT_GT;
	v->a[23823] = anon_sym_LT_AMP;
	v->a[23824] = anon_sym_GT_AMP;
	v->a[23825] = anon_sym_GT_PIPE;
	v->a[23826] = anon_sym_LT_GT;
	v->a[23827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23828] = anon_sym_DOLLAR;
	v->a[23829] = anon_sym_DQUOTE;
	v->a[23830] = sym_raw_string;
	v->a[23831] = sym_number;
	v->a[23832] = anon_sym_DOLLAR_LBRACE;
	v->a[23833] = anon_sym_DOLLAR_LPAREN;
	v->a[23834] = anon_sym_BQUOTE;
	v->a[23835] = sym_word;
	v->a[23836] = 3;
	v->a[23837] = actions(664);
	v->a[23838] = 1;
	v->a[23839] = sym_comment;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = actions(906);
	v->a[23841] = 13;
	v->a[23842] = anon_sym_PIPE;
	v->a[23843] = anon_sym_EQ;
	v->a[23844] = anon_sym_LT;
	v->a[23845] = anon_sym_GT;
	v->a[23846] = anon_sym_GT_GT;
	v->a[23847] = anon_sym_LT_LT;
	v->a[23848] = anon_sym_CARET;
	v->a[23849] = anon_sym_AMP;
	v->a[23850] = anon_sym_PLUS;
	v->a[23851] = anon_sym_DASH;
	v->a[23852] = anon_sym_STAR;
	v->a[23853] = anon_sym_SLASH;
	v->a[23854] = anon_sym_PERCENT;
	v->a[23855] = actions(908);
	v->a[23856] = 21;
	v->a[23857] = anon_sym_AMP_AMP;
	v->a[23858] = anon_sym_PIPE_PIPE;
	v->a[23859] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = anon_sym_PLUS_EQ;
	v->a[23861] = anon_sym_DASH_EQ;
	v->a[23862] = anon_sym_STAR_EQ;
	v->a[23863] = anon_sym_SLASH_EQ;
	v->a[23864] = anon_sym_PERCENT_EQ;
	v->a[23865] = anon_sym_LT_LT_EQ;
	v->a[23866] = anon_sym_GT_GT_EQ;
	v->a[23867] = anon_sym_AMP_EQ;
	v->a[23868] = anon_sym_CARET_EQ;
	v->a[23869] = anon_sym_PIPE_EQ;
	v->a[23870] = anon_sym_EQ_EQ;
	v->a[23871] = anon_sym_BANG_EQ;
	v->a[23872] = anon_sym_LT_EQ;
	v->a[23873] = anon_sym_GT_EQ;
	v->a[23874] = anon_sym_QMARK;
	v->a[23875] = anon_sym_COLON;
	v->a[23876] = anon_sym_PLUS_PLUS2;
	v->a[23877] = anon_sym_DASH_DASH2;
	v->a[23878] = 3;
	v->a[23879] = actions(664);
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = 1;
	v->a[23881] = sym_comment;
	v->a[23882] = actions(897);
	v->a[23883] = 13;
	v->a[23884] = anon_sym_PIPE;
	v->a[23885] = anon_sym_EQ;
	v->a[23886] = anon_sym_LT;
	v->a[23887] = anon_sym_GT;
	v->a[23888] = anon_sym_GT_GT;
	v->a[23889] = anon_sym_LT_LT;
	v->a[23890] = anon_sym_CARET;
	v->a[23891] = anon_sym_AMP;
	v->a[23892] = anon_sym_PLUS;
	v->a[23893] = anon_sym_DASH;
	v->a[23894] = anon_sym_STAR;
	v->a[23895] = anon_sym_SLASH;
	v->a[23896] = anon_sym_PERCENT;
	v->a[23897] = actions(899);
	v->a[23898] = 20;
	v->a[23899] = anon_sym_RPAREN;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
