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
	v->a[23800] = anon_sym_PLUS_EQ;
	v->a[23801] = anon_sym_DASH_EQ;
	v->a[23802] = anon_sym_STAR_EQ;
	v->a[23803] = anon_sym_SLASH_EQ;
	v->a[23804] = anon_sym_PERCENT_EQ;
	v->a[23805] = anon_sym_LT_LT_EQ;
	v->a[23806] = anon_sym_GT_GT_EQ;
	v->a[23807] = anon_sym_AMP_EQ;
	v->a[23808] = anon_sym_CARET_EQ;
	v->a[23809] = anon_sym_PIPE_EQ;
	v->a[23810] = anon_sym_EQ_EQ;
	v->a[23811] = anon_sym_BANG_EQ;
	v->a[23812] = anon_sym_LT_EQ;
	v->a[23813] = anon_sym_GT_EQ;
	v->a[23814] = anon_sym_QMARK;
	v->a[23815] = anon_sym_COLON;
	v->a[23816] = anon_sym_PLUS_PLUS2;
	v->a[23817] = anon_sym_DASH_DASH2;
	v->a[23818] = 12;
	v->a[23819] = actions(3);
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = 1;
	v->a[23821] = sym_comment;
	v->a[23822] = actions(892);
	v->a[23823] = 1;
	v->a[23824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23825] = actions(895);
	v->a[23826] = 1;
	v->a[23827] = anon_sym_DOLLAR;
	v->a[23828] = actions(898);
	v->a[23829] = 1;
	v->a[23830] = anon_sym_DQUOTE;
	v->a[23831] = actions(901);
	v->a[23832] = 1;
	v->a[23833] = anon_sym_DOLLAR_LBRACE;
	v->a[23834] = actions(904);
	v->a[23835] = 1;
	v->a[23836] = anon_sym_DOLLAR_LPAREN;
	v->a[23837] = actions(907);
	v->a[23838] = 1;
	v->a[23839] = anon_sym_BQUOTE;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = actions(540);
	v->a[23841] = 2;
	v->a[23842] = sym_file_descriptor;
	v->a[23843] = ts_builtin_sym_end;
	v->a[23844] = state(259);
	v->a[23845] = 2;
	v->a[23846] = sym_concatenation;
	v->a[23847] = aux_sym_for_statement_repeat1;
	v->a[23848] = actions(889);
	v->a[23849] = 3;
	v->a[23850] = sym_raw_string;
	v->a[23851] = sym_number;
	v->a[23852] = sym_word;
	v->a[23853] = state(525);
	v->a[23854] = 5;
	v->a[23855] = sym_arithmetic_expansion;
	v->a[23856] = sym_string;
	v->a[23857] = sym_simple_expansion;
	v->a[23858] = sym_expansion;
	v->a[23859] = sym_command_substitution;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = actions(520);
	v->a[23861] = 16;
	v->a[23862] = anon_sym_PIPE;
	v->a[23863] = anon_sym_SEMI_SEMI;
	v->a[23864] = anon_sym_AMP_AMP;
	v->a[23865] = anon_sym_PIPE_PIPE;
	v->a[23866] = anon_sym_LT;
	v->a[23867] = anon_sym_GT;
	v->a[23868] = anon_sym_GT_GT;
	v->a[23869] = anon_sym_LT_AMP;
	v->a[23870] = anon_sym_GT_AMP;
	v->a[23871] = anon_sym_GT_PIPE;
	v->a[23872] = anon_sym_LT_GT;
	v->a[23873] = anon_sym_LT_LT;
	v->a[23874] = anon_sym_LT_LT_DASH;
	v->a[23875] = aux_sym_heredoc_redirect_token1;
	v->a[23876] = anon_sym_AMP;
	v->a[23877] = anon_sym_SEMI;
	v->a[23878] = 17;
	v->a[23879] = actions(668);
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = 1;
	v->a[23881] = anon_sym_AMP;
	v->a[23882] = actions(680);
	v->a[23883] = 1;
	v->a[23884] = sym_comment;
	v->a[23885] = actions(730);
	v->a[23886] = 1;
	v->a[23887] = anon_sym_CARET;
	v->a[23888] = actions(732);
	v->a[23889] = 1;
	v->a[23890] = anon_sym_PIPE;
	v->a[23891] = actions(734);
	v->a[23892] = 1;
	v->a[23893] = anon_sym_AMP_AMP;
	v->a[23894] = actions(736);
	v->a[23895] = 1;
	v->a[23896] = anon_sym_PIPE_PIPE;
	v->a[23897] = actions(738);
	v->a[23898] = 1;
	v->a[23899] = anon_sym_QMARK;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
