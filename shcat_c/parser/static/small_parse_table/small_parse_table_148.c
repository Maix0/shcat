/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_148.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_740(t_small_parse_table_array *v)
{
	v->a[14800] = 1;
	v->a[14801] = anon_sym_BQUOTE;
	v->a[14802] = actions(3411);
	v->a[14803] = 1;
	v->a[14804] = anon_sym_DOLLAR_BQUOTE;
	v->a[14805] = actions(3415);
	v->a[14806] = 1;
	v->a[14807] = sym_test_operator;
	v->a[14808] = actions(3417);
	v->a[14809] = 1;
	v->a[14810] = sym__brace_start;
	v->a[14811] = state(2161);
	v->a[14812] = 1;
	v->a[14813] = aux_sym__literal_repeat1;
	v->a[14814] = actions(2074);
	v->a[14815] = 2;
	v->a[14816] = sym_file_descriptor;
	v->a[14817] = aux_sym_heredoc_redirect_token1;
	v->a[14818] = actions(3393);
	v->a[14819] = 2;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = anon_sym_LPAREN_LPAREN;
	v->a[14821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14822] = actions(3413);
	v->a[14823] = 2;
	v->a[14824] = anon_sym_LT_LPAREN;
	v->a[14825] = anon_sym_GT_LPAREN;
	v->a[14826] = state(672);
	v->a[14827] = 2;
	v->a[14828] = sym_concatenation;
	v->a[14829] = aux_sym_for_statement_repeat1;
	v->a[14830] = actions(3391);
	v->a[14831] = 3;
	v->a[14832] = sym_raw_string;
	v->a[14833] = sym_ansi_c_string;
	v->a[14834] = sym_word;
	v->a[14835] = state(1711);
	v->a[14836] = 9;
	v->a[14837] = sym_arithmetic_expansion;
	v->a[14838] = sym_brace_expression;
	v->a[14839] = sym_string;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = sym_translated_string;
	v->a[14841] = sym_number;
	v->a[14842] = sym_simple_expansion;
	v->a[14843] = sym_expansion;
	v->a[14844] = sym_command_substitution;
	v->a[14845] = sym_process_substitution;
	v->a[14846] = actions(2072);
	v->a[14847] = 21;
	v->a[14848] = anon_sym_SEMI;
	v->a[14849] = anon_sym_PIPE_PIPE;
	v->a[14850] = anon_sym_AMP_AMP;
	v->a[14851] = anon_sym_PIPE;
	v->a[14852] = anon_sym_AMP;
	v->a[14853] = anon_sym_LT;
	v->a[14854] = anon_sym_GT;
	v->a[14855] = anon_sym_LT_LT;
	v->a[14856] = anon_sym_GT_GT;
	v->a[14857] = anon_sym_RPAREN;
	v->a[14858] = anon_sym_SEMI_SEMI;
	v->a[14859] = anon_sym_PIPE_AMP;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = anon_sym_AMP_GT;
	v->a[14861] = anon_sym_AMP_GT_GT;
	v->a[14862] = anon_sym_LT_AMP;
	v->a[14863] = anon_sym_GT_AMP;
	v->a[14864] = anon_sym_GT_PIPE;
	v->a[14865] = anon_sym_LT_AMP_DASH;
	v->a[14866] = anon_sym_GT_AMP_DASH;
	v->a[14867] = anon_sym_LT_LT_DASH;
	v->a[14868] = anon_sym_LT_LT_LT;
	v->a[14869] = 36;
	v->a[14870] = actions(71);
	v->a[14871] = 1;
	v->a[14872] = sym_comment;
	v->a[14873] = actions(229);
	v->a[14874] = 1;
	v->a[14875] = anon_sym_RPAREN_RPAREN;
	v->a[14876] = actions(1141);
	v->a[14877] = 1;
	v->a[14878] = anon_sym_DOLLAR_LBRACK;
	v->a[14879] = actions(1145);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 1;
	v->a[14881] = anon_sym_DOLLAR;
	v->a[14882] = actions(1149);
	v->a[14883] = 1;
	v->a[14884] = anon_sym_DQUOTE;
	v->a[14885] = actions(1153);
	v->a[14886] = 1;
	v->a[14887] = aux_sym_number_token1;
	v->a[14888] = actions(1155);
	v->a[14889] = 1;
	v->a[14890] = aux_sym_number_token2;
	v->a[14891] = actions(1157);
	v->a[14892] = 1;
	v->a[14893] = anon_sym_DOLLAR_LBRACE;
	v->a[14894] = actions(1159);
	v->a[14895] = 1;
	v->a[14896] = anon_sym_DOLLAR_LPAREN;
	v->a[14897] = actions(1163);
	v->a[14898] = 1;
	v->a[14899] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
