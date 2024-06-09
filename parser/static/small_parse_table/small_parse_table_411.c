/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_411.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2055(t_small_parse_table_array *v)
{
	v->a[41100] = 3;
	v->a[41101] = actions(3);
	v->a[41102] = 1;
	v->a[41103] = sym_comment;
	v->a[41104] = actions(1188);
	v->a[41105] = 4;
	v->a[41106] = sym_file_descriptor;
	v->a[41107] = sym__concat;
	v->a[41108] = sym__bare_dollar;
	v->a[41109] = ts_builtin_sym_end;
	v->a[41110] = actions(1186);
	v->a[41111] = 30;
	v->a[41112] = anon_sym_PIPE;
	v->a[41113] = anon_sym_SEMI_SEMI;
	v->a[41114] = anon_sym_AMP_AMP;
	v->a[41115] = anon_sym_PIPE_PIPE;
	v->a[41116] = anon_sym_LT;
	v->a[41117] = anon_sym_GT;
	v->a[41118] = anon_sym_GT_GT;
	v->a[41119] = anon_sym_AMP_GT;
	small_parse_table_2056(v);
}

void	small_parse_table_2056(t_small_parse_table_array *v)
{
	v->a[41120] = anon_sym_AMP_GT_GT;
	v->a[41121] = anon_sym_LT_AMP;
	v->a[41122] = anon_sym_GT_AMP;
	v->a[41123] = anon_sym_GT_PIPE;
	v->a[41124] = anon_sym_LT_AMP_DASH;
	v->a[41125] = anon_sym_GT_AMP_DASH;
	v->a[41126] = anon_sym_LT_LT;
	v->a[41127] = anon_sym_LT_LT_DASH;
	v->a[41128] = aux_sym_heredoc_redirect_token1;
	v->a[41129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41130] = anon_sym_AMP;
	v->a[41131] = aux_sym_concatenation_token1;
	v->a[41132] = anon_sym_DOLLAR;
	v->a[41133] = anon_sym_DQUOTE;
	v->a[41134] = sym_raw_string;
	v->a[41135] = aux_sym_number_token1;
	v->a[41136] = aux_sym_number_token2;
	v->a[41137] = anon_sym_DOLLAR_LBRACE;
	v->a[41138] = anon_sym_DOLLAR_LPAREN;
	v->a[41139] = anon_sym_BQUOTE;
	small_parse_table_2057(v);
}

void	small_parse_table_2057(t_small_parse_table_array *v)
{
	v->a[41140] = sym_word;
	v->a[41141] = anon_sym_SEMI;
	v->a[41142] = 17;
	v->a[41143] = actions(1404);
	v->a[41144] = 1;
	v->a[41145] = sym_comment;
	v->a[41146] = actions(1418);
	v->a[41147] = 1;
	v->a[41148] = anon_sym_AMP;
	v->a[41149] = actions(1420);
	v->a[41150] = 1;
	v->a[41151] = anon_sym_PIPE;
	v->a[41152] = actions(1422);
	v->a[41153] = 1;
	v->a[41154] = anon_sym_AMP_AMP;
	v->a[41155] = actions(1424);
	v->a[41156] = 1;
	v->a[41157] = anon_sym_PIPE_PIPE;
	v->a[41158] = actions(1426);
	v->a[41159] = 1;
	small_parse_table_2058(v);
}

void	small_parse_table_2058(t_small_parse_table_array *v)
{
	v->a[41160] = anon_sym_EQ;
	v->a[41161] = actions(1428);
	v->a[41162] = 1;
	v->a[41163] = anon_sym_CARET;
	v->a[41164] = actions(1430);
	v->a[41165] = 1;
	v->a[41166] = anon_sym_QMARK;
	v->a[41167] = actions(1541);
	v->a[41168] = 1;
	v->a[41169] = anon_sym_RPAREN_RPAREN;
	v->a[41170] = actions(1402);
	v->a[41171] = 2;
	v->a[41172] = anon_sym_PLUS_PLUS2;
	v->a[41173] = anon_sym_DASH_DASH2;
	v->a[41174] = actions(1408);
	v->a[41175] = 2;
	v->a[41176] = anon_sym_LT;
	v->a[41177] = anon_sym_GT;
	v->a[41178] = actions(1410);
	v->a[41179] = 2;
	small_parse_table_2059(v);
}

void	small_parse_table_2059(t_small_parse_table_array *v)
{
	v->a[41180] = anon_sym_GT_GT;
	v->a[41181] = anon_sym_LT_LT;
	v->a[41182] = actions(1412);
	v->a[41183] = 2;
	v->a[41184] = anon_sym_LT_EQ;
	v->a[41185] = anon_sym_GT_EQ;
	v->a[41186] = actions(1414);
	v->a[41187] = 2;
	v->a[41188] = anon_sym_PLUS;
	v->a[41189] = anon_sym_DASH;
	v->a[41190] = actions(1416);
	v->a[41191] = 2;
	v->a[41192] = anon_sym_EQ_EQ;
	v->a[41193] = anon_sym_BANG_EQ;
	v->a[41194] = actions(1406);
	v->a[41195] = 3;
	v->a[41196] = anon_sym_STAR;
	v->a[41197] = anon_sym_SLASH;
	v->a[41198] = anon_sym_PERCENT;
	v->a[41199] = actions(1543);
	small_parse_table_2060(v);
}

/* EOF small_parse_table_411.c */
