/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1208.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6040(t_small_parse_table_array *v)
{
	v->a[120800] = anon_sym_LT_AMP_DASH;
	v->a[120801] = anon_sym_GT_AMP_DASH;
	v->a[120802] = anon_sym_LT_LT_DASH;
	v->a[120803] = anon_sym_LT_LT_LT;
	v->a[120804] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120805] = anon_sym_DOLLAR_LBRACK;
	v->a[120806] = anon_sym_DQUOTE;
	v->a[120807] = sym_raw_string;
	v->a[120808] = sym_ansi_c_string;
	v->a[120809] = anon_sym_DOLLAR_LBRACE;
	v->a[120810] = anon_sym_DOLLAR_BQUOTE;
	v->a[120811] = anon_sym_LT_LPAREN;
	v->a[120812] = anon_sym_GT_LPAREN;
	v->a[120813] = 5;
	v->a[120814] = actions(71);
	v->a[120815] = 1;
	v->a[120816] = sym_comment;
	v->a[120817] = state(2285);
	v->a[120818] = 1;
	v->a[120819] = aux_sym_concatenation_repeat1;
	small_parse_table_6041(v);
}

void	small_parse_table_6041(t_small_parse_table_array *v)
{
	v->a[120820] = actions(6441);
	v->a[120821] = 2;
	v->a[120822] = sym__concat;
	v->a[120823] = aux_sym_concatenation_token1;
	v->a[120824] = actions(5393);
	v->a[120825] = 14;
	v->a[120826] = anon_sym_PIPE;
	v->a[120827] = anon_sym_LT;
	v->a[120828] = anon_sym_GT;
	v->a[120829] = anon_sym_LT_LT;
	v->a[120830] = anon_sym_AMP_GT;
	v->a[120831] = anon_sym_LT_AMP;
	v->a[120832] = anon_sym_GT_AMP;
	v->a[120833] = anon_sym_DOLLAR;
	v->a[120834] = sym__special_character;
	v->a[120835] = aux_sym_number_token1;
	v->a[120836] = aux_sym_number_token2;
	v->a[120837] = anon_sym_DOLLAR_LPAREN;
	v->a[120838] = anon_sym_BQUOTE;
	v->a[120839] = sym_word;
	small_parse_table_6042(v);
}

void	small_parse_table_6042(t_small_parse_table_array *v)
{
	v->a[120840] = actions(5395);
	v->a[120841] = 25;
	v->a[120842] = sym_file_descriptor;
	v->a[120843] = sym_variable_name;
	v->a[120844] = sym_test_operator;
	v->a[120845] = sym__brace_start;
	v->a[120846] = anon_sym_LPAREN_LPAREN;
	v->a[120847] = anon_sym_PIPE_PIPE;
	v->a[120848] = anon_sym_AMP_AMP;
	v->a[120849] = anon_sym_GT_GT;
	v->a[120850] = anon_sym_PIPE_AMP;
	v->a[120851] = anon_sym_RBRACK;
	v->a[120852] = anon_sym_AMP_GT_GT;
	v->a[120853] = anon_sym_GT_PIPE;
	v->a[120854] = anon_sym_LT_AMP_DASH;
	v->a[120855] = anon_sym_GT_AMP_DASH;
	v->a[120856] = anon_sym_LT_LT_DASH;
	v->a[120857] = anon_sym_LT_LT_LT;
	v->a[120858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120859] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6043(v);
}

void	small_parse_table_6043(t_small_parse_table_array *v)
{
	v->a[120860] = anon_sym_DQUOTE;
	v->a[120861] = sym_raw_string;
	v->a[120862] = sym_ansi_c_string;
	v->a[120863] = anon_sym_DOLLAR_LBRACE;
	v->a[120864] = anon_sym_DOLLAR_BQUOTE;
	v->a[120865] = anon_sym_LT_LPAREN;
	v->a[120866] = anon_sym_GT_LPAREN;
	v->a[120867] = 3;
	v->a[120868] = actions(3);
	v->a[120869] = 1;
	v->a[120870] = sym_comment;
	v->a[120871] = actions(1263);
	v->a[120872] = 4;
	v->a[120873] = sym_file_descriptor;
	v->a[120874] = sym_test_operator;
	v->a[120875] = sym__brace_start;
	v->a[120876] = aux_sym_heredoc_redirect_token1;
	v->a[120877] = actions(1261);
	v->a[120878] = 38;
	v->a[120879] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6044(v);
}

void	small_parse_table_6044(t_small_parse_table_array *v)
{
	v->a[120880] = anon_sym_SEMI;
	v->a[120881] = anon_sym_PIPE_PIPE;
	v->a[120882] = anon_sym_AMP_AMP;
	v->a[120883] = anon_sym_PIPE;
	v->a[120884] = anon_sym_AMP;
	v->a[120885] = anon_sym_LT;
	v->a[120886] = anon_sym_GT;
	v->a[120887] = anon_sym_LT_LT;
	v->a[120888] = anon_sym_GT_GT;
	v->a[120889] = anon_sym_RPAREN;
	v->a[120890] = anon_sym_SEMI_SEMI;
	v->a[120891] = anon_sym_PIPE_AMP;
	v->a[120892] = anon_sym_AMP_GT;
	v->a[120893] = anon_sym_AMP_GT_GT;
	v->a[120894] = anon_sym_LT_AMP;
	v->a[120895] = anon_sym_GT_AMP;
	v->a[120896] = anon_sym_GT_PIPE;
	v->a[120897] = anon_sym_LT_AMP_DASH;
	v->a[120898] = anon_sym_GT_AMP_DASH;
	v->a[120899] = anon_sym_LT_LT_DASH;
	small_parse_table_6045(v);
}

/* EOF small_parse_table_1208.c */
