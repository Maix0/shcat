/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_321.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1605(t_small_parse_table_array *v)
{
	v->a[32100] = 7;
	v->a[32101] = anon_sym_PIPE;
	v->a[32102] = anon_sym_SEMI_SEMI;
	v->a[32103] = anon_sym_AMP_AMP;
	v->a[32104] = anon_sym_PIPE_PIPE;
	v->a[32105] = anon_sym_LT_LT;
	v->a[32106] = aux_sym_heredoc_redirect_token1;
	v->a[32107] = anon_sym_SEMI;
	v->a[32108] = actions(1247);
	v->a[32109] = 9;
	v->a[32110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32111] = anon_sym_DOLLAR;
	v->a[32112] = anon_sym_DQUOTE;
	v->a[32113] = sym_raw_string;
	v->a[32114] = sym_number;
	v->a[32115] = anon_sym_DOLLAR_LBRACE;
	v->a[32116] = anon_sym_DOLLAR_LPAREN;
	v->a[32117] = anon_sym_BQUOTE;
	v->a[32118] = sym_word;
	v->a[32119] = 15;
	small_parse_table_1606(v);
}

void	small_parse_table_1606(t_small_parse_table_array *v)
{
	v->a[32120] = actions(3);
	v->a[32121] = 1;
	v->a[32122] = sym_comment;
	v->a[32123] = actions(778);
	v->a[32124] = 1;
	v->a[32125] = anon_sym_LPAREN;
	v->a[32126] = actions(782);
	v->a[32127] = 1;
	v->a[32128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32129] = actions(784);
	v->a[32130] = 1;
	v->a[32131] = anon_sym_DOLLAR;
	v->a[32132] = actions(786);
	v->a[32133] = 1;
	v->a[32134] = anon_sym_DQUOTE;
	v->a[32135] = actions(788);
	v->a[32136] = 1;
	v->a[32137] = anon_sym_DOLLAR_LBRACE;
	v->a[32138] = actions(790);
	v->a[32139] = 1;
	small_parse_table_1607(v);
}

void	small_parse_table_1607(t_small_parse_table_array *v)
{
	v->a[32140] = anon_sym_DOLLAR_LPAREN;
	v->a[32141] = actions(792);
	v->a[32142] = 1;
	v->a[32143] = anon_sym_BQUOTE;
	v->a[32144] = actions(794);
	v->a[32145] = 1;
	v->a[32146] = sym_extglob_pattern;
	v->a[32147] = state(597);
	v->a[32148] = 1;
	v->a[32149] = aux_sym_case_statement_repeat1;
	v->a[32150] = state(1232);
	v->a[32151] = 1;
	v->a[32152] = sym_case_item;
	v->a[32153] = state(1652);
	v->a[32154] = 1;
	v->a[32155] = sym__case_item_last;
	v->a[32156] = state(1538);
	v->a[32157] = 2;
	v->a[32158] = sym_concatenation;
	v->a[32159] = sym__extglob_blob;
	small_parse_table_1608(v);
}

void	small_parse_table_1608(t_small_parse_table_array *v)
{
	v->a[32160] = actions(774);
	v->a[32161] = 3;
	v->a[32162] = sym_raw_string;
	v->a[32163] = sym_number;
	v->a[32164] = sym_word;
	v->a[32165] = state(1468);
	v->a[32166] = 5;
	v->a[32167] = sym_arithmetic_expansion;
	v->a[32168] = sym_string;
	v->a[32169] = sym_simple_expansion;
	v->a[32170] = sym_expansion;
	v->a[32171] = sym_command_substitution;
	v->a[32172] = 6;
	v->a[32173] = actions(3);
	v->a[32174] = 1;
	v->a[32175] = sym_comment;
	v->a[32176] = actions(1257);
	v->a[32177] = 1;
	v->a[32178] = sym_variable_name;
	v->a[32179] = actions(1318);
	small_parse_table_1609(v);
}

void	small_parse_table_1609(t_small_parse_table_array *v)
{
	v->a[32180] = 1;
	v->a[32181] = anon_sym_RPAREN;
	v->a[32182] = actions(1254);
	v->a[32183] = 3;
	v->a[32184] = anon_sym_LT;
	v->a[32185] = anon_sym_GT;
	v->a[32186] = anon_sym_GT_GT;
	v->a[32187] = actions(1249);
	v->a[32188] = 7;
	v->a[32189] = anon_sym_PIPE;
	v->a[32190] = anon_sym_SEMI_SEMI;
	v->a[32191] = anon_sym_AMP_AMP;
	v->a[32192] = anon_sym_PIPE_PIPE;
	v->a[32193] = anon_sym_LT_LT;
	v->a[32194] = aux_sym_heredoc_redirect_token1;
	v->a[32195] = anon_sym_SEMI;
	v->a[32196] = actions(1247);
	v->a[32197] = 9;
	v->a[32198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32199] = anon_sym_DOLLAR;
	small_parse_table_1610(v);
}

/* EOF small_parse_table_321.c */
