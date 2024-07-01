/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_504.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2520(t_small_parse_table_array *v)
{
	v->a[50400] = sym_arithmetic_literal;
	v->a[50401] = sym_arithmetic_binary_expression;
	v->a[50402] = sym_arithmetic_ternary_expression;
	v->a[50403] = sym_arithmetic_unary_expression;
	v->a[50404] = sym_arithmetic_postfix_expression;
	v->a[50405] = sym_arithmetic_parenthesized_expression;
	v->a[50406] = sym_command_substitution;
	v->a[50407] = 4;
	v->a[50408] = actions(3);
	v->a[50409] = 1;
	v->a[50410] = sym_comment;
	v->a[50411] = actions(1575);
	v->a[50412] = 1;
	v->a[50413] = anon_sym_BQUOTE;
	v->a[50414] = actions(1577);
	v->a[50415] = 2;
	v->a[50416] = sym_file_descriptor;
	v->a[50417] = sym_variable_name;
	v->a[50418] = actions(1573);
	v->a[50419] = 24;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = anon_sym_for;
	v->a[50421] = anon_sym_while;
	v->a[50422] = anon_sym_until;
	v->a[50423] = anon_sym_if;
	v->a[50424] = anon_sym_case;
	v->a[50425] = anon_sym_LPAREN;
	v->a[50426] = anon_sym_LBRACE;
	v->a[50427] = anon_sym_BANG;
	v->a[50428] = anon_sym_LT;
	v->a[50429] = anon_sym_GT;
	v->a[50430] = anon_sym_GT_GT;
	v->a[50431] = anon_sym_LT_AMP;
	v->a[50432] = anon_sym_GT_AMP;
	v->a[50433] = anon_sym_GT_PIPE;
	v->a[50434] = anon_sym_LT_AMP_DASH;
	v->a[50435] = anon_sym_GT_AMP_DASH;
	v->a[50436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50437] = anon_sym_DOLLAR;
	v->a[50438] = anon_sym_DQUOTE;
	v->a[50439] = sym_raw_string;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = sym_number;
	v->a[50441] = anon_sym_DOLLAR_LBRACE;
	v->a[50442] = anon_sym_DOLLAR_LPAREN;
	v->a[50443] = sym_word;
	v->a[50444] = 18;
	v->a[50445] = actions(3);
	v->a[50446] = 1;
	v->a[50447] = sym_comment;
	v->a[50448] = actions(1772);
	v->a[50449] = 1;
	v->a[50450] = anon_sym_esac;
	v->a[50451] = actions(1774);
	v->a[50452] = 1;
	v->a[50453] = anon_sym_LPAREN;
	v->a[50454] = actions(1778);
	v->a[50455] = 1;
	v->a[50456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50457] = actions(1780);
	v->a[50458] = 1;
	v->a[50459] = anon_sym_DOLLAR;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = actions(1782);
	v->a[50461] = 1;
	v->a[50462] = anon_sym_DQUOTE;
	v->a[50463] = actions(1784);
	v->a[50464] = 1;
	v->a[50465] = anon_sym_DOLLAR_LBRACE;
	v->a[50466] = actions(1786);
	v->a[50467] = 1;
	v->a[50468] = anon_sym_DOLLAR_LPAREN;
	v->a[50469] = actions(1788);
	v->a[50470] = 1;
	v->a[50471] = anon_sym_BQUOTE;
	v->a[50472] = actions(1790);
	v->a[50473] = 1;
	v->a[50474] = sym_extglob_pattern;
	v->a[50475] = state(1122);
	v->a[50476] = 1;
	v->a[50477] = sym_terminator;
	v->a[50478] = state(1202);
	v->a[50479] = 1;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = aux_sym_case_statement_repeat1;
	v->a[50481] = state(1920);
	v->a[50482] = 1;
	v->a[50483] = sym_case_item;
	v->a[50484] = state(2223);
	v->a[50485] = 1;
	v->a[50486] = sym__case_item_last;
	v->a[50487] = state(2096);
	v->a[50488] = 2;
	v->a[50489] = sym_concatenation;
	v->a[50490] = sym__extglob_blob;
	v->a[50491] = actions(1770);
	v->a[50492] = 3;
	v->a[50493] = sym_raw_string;
	v->a[50494] = sym_number;
	v->a[50495] = sym_word;
	v->a[50496] = actions(1776);
	v->a[50497] = 4;
	v->a[50498] = anon_sym_SEMI_SEMI;
	v->a[50499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
