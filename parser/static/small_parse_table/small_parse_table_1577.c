/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1577.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7885(t_small_parse_table_array *v)
{
	v->a[157700] = actions(7202);
	v->a[157701] = 1;
	v->a[157702] = anon_sym_QMARK;
	v->a[157703] = actions(7206);
	v->a[157704] = 1;
	v->a[157705] = sym_test_operator;
	v->a[157706] = actions(6793);
	v->a[157707] = 2;
	v->a[157708] = anon_sym_PLUS_PLUS;
	v->a[157709] = anon_sym_DASH_DASH;
	v->a[157710] = actions(7186);
	v->a[157711] = 2;
	v->a[157712] = anon_sym_EQ_EQ;
	v->a[157713] = anon_sym_BANG_EQ;
	v->a[157714] = actions(7188);
	v->a[157715] = 2;
	v->a[157716] = anon_sym_LT;
	v->a[157717] = anon_sym_GT;
	v->a[157718] = actions(7190);
	v->a[157719] = 2;
	small_parse_table_7886(v);
}

void	small_parse_table_7886(t_small_parse_table_array *v)
{
	v->a[157720] = anon_sym_LT_EQ;
	v->a[157721] = anon_sym_GT_EQ;
	v->a[157722] = actions(7192);
	v->a[157723] = 2;
	v->a[157724] = anon_sym_LT_LT;
	v->a[157725] = anon_sym_GT_GT;
	v->a[157726] = actions(7194);
	v->a[157727] = 2;
	v->a[157728] = anon_sym_PLUS;
	v->a[157729] = anon_sym_DASH;
	v->a[157730] = actions(7196);
	v->a[157731] = 3;
	v->a[157732] = anon_sym_STAR;
	v->a[157733] = anon_sym_SLASH;
	v->a[157734] = anon_sym_PERCENT;
	v->a[157735] = actions(6805);
	v->a[157736] = 13;
	v->a[157737] = anon_sym_PLUS_EQ;
	v->a[157738] = anon_sym_DASH_EQ;
	v->a[157739] = anon_sym_STAR_EQ;
	small_parse_table_7887(v);
}

void	small_parse_table_7887(t_small_parse_table_array *v)
{
	v->a[157740] = anon_sym_SLASH_EQ;
	v->a[157741] = anon_sym_PERCENT_EQ;
	v->a[157742] = anon_sym_STAR_STAR_EQ;
	v->a[157743] = anon_sym_LT_LT_EQ;
	v->a[157744] = anon_sym_GT_GT_EQ;
	v->a[157745] = anon_sym_AMP_EQ;
	v->a[157746] = anon_sym_CARET_EQ;
	v->a[157747] = anon_sym_PIPE_EQ;
	v->a[157748] = anon_sym_EQ_TILDE;
	v->a[157749] = anon_sym_COLON;
	v->a[157750] = 3;
	v->a[157751] = actions(71);
	v->a[157752] = 1;
	v->a[157753] = sym_comment;
	v->a[157754] = actions(1261);
	v->a[157755] = 13;
	v->a[157756] = anon_sym_PIPE;
	v->a[157757] = anon_sym_LT;
	v->a[157758] = anon_sym_GT;
	v->a[157759] = anon_sym_LT_LT;
	small_parse_table_7888(v);
}

void	small_parse_table_7888(t_small_parse_table_array *v)
{
	v->a[157760] = anon_sym_AMP_GT;
	v->a[157761] = anon_sym_LT_AMP;
	v->a[157762] = anon_sym_GT_AMP;
	v->a[157763] = anon_sym_DOLLAR;
	v->a[157764] = aux_sym_number_token1;
	v->a[157765] = aux_sym_number_token2;
	v->a[157766] = anon_sym_DOLLAR_LPAREN;
	v->a[157767] = aux_sym__simple_variable_name_token1;
	v->a[157768] = sym_word;
	v->a[157769] = actions(1263);
	v->a[157770] = 24;
	v->a[157771] = sym_file_descriptor;
	v->a[157772] = sym_test_operator;
	v->a[157773] = sym__brace_start;
	v->a[157774] = anon_sym_LPAREN_LPAREN;
	v->a[157775] = anon_sym_PIPE_PIPE;
	v->a[157776] = anon_sym_AMP_AMP;
	v->a[157777] = anon_sym_GT_GT;
	v->a[157778] = anon_sym_PIPE_AMP;
	v->a[157779] = anon_sym_AMP_GT_GT;
	small_parse_table_7889(v);
}

void	small_parse_table_7889(t_small_parse_table_array *v)
{
	v->a[157780] = anon_sym_GT_PIPE;
	v->a[157781] = anon_sym_LT_AMP_DASH;
	v->a[157782] = anon_sym_GT_AMP_DASH;
	v->a[157783] = anon_sym_LT_LT_DASH;
	v->a[157784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[157785] = anon_sym_DOLLAR_LBRACK;
	v->a[157786] = sym__special_character;
	v->a[157787] = anon_sym_DQUOTE;
	v->a[157788] = sym_raw_string;
	v->a[157789] = sym_ansi_c_string;
	v->a[157790] = anon_sym_DOLLAR_LBRACE;
	v->a[157791] = anon_sym_BQUOTE;
	v->a[157792] = anon_sym_DOLLAR_BQUOTE;
	v->a[157793] = anon_sym_LT_LPAREN;
	v->a[157794] = anon_sym_GT_LPAREN;
	v->a[157795] = 14;
	v->a[157796] = actions(71);
	v->a[157797] = 1;
	v->a[157798] = sym_comment;
	v->a[157799] = actions(7286);
	small_parse_table_7890(v);
}

/* EOF small_parse_table_1577.c */
