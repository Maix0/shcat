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
	v->a[32100] = anon_sym_LT_LT;
	v->a[32101] = anon_sym_LT_LT_DASH;
	v->a[32102] = aux_sym_heredoc_redirect_token1;
	v->a[32103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32104] = anon_sym_AMP;
	v->a[32105] = anon_sym_DOLLAR;
	v->a[32106] = anon_sym_DQUOTE;
	v->a[32107] = sym_raw_string;
	v->a[32108] = sym_number;
	v->a[32109] = anon_sym_DOLLAR_LBRACE;
	v->a[32110] = anon_sym_DOLLAR_LPAREN;
	v->a[32111] = anon_sym_BQUOTE;
	v->a[32112] = sym_word;
	v->a[32113] = anon_sym_SEMI;
	v->a[32114] = 12;
	v->a[32115] = actions(3);
	v->a[32116] = 1;
	v->a[32117] = sym_comment;
	v->a[32118] = actions(621);
	v->a[32119] = 1;
	small_parse_table_1606(v);
}

void	small_parse_table_1606(t_small_parse_table_array *v)
{
	v->a[32120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32121] = actions(624);
	v->a[32122] = 1;
	v->a[32123] = anon_sym_DOLLAR;
	v->a[32124] = actions(627);
	v->a[32125] = 1;
	v->a[32126] = anon_sym_DQUOTE;
	v->a[32127] = actions(630);
	v->a[32128] = 1;
	v->a[32129] = anon_sym_DOLLAR_LBRACE;
	v->a[32130] = actions(633);
	v->a[32131] = 1;
	v->a[32132] = anon_sym_DOLLAR_LPAREN;
	v->a[32133] = actions(636);
	v->a[32134] = 1;
	v->a[32135] = anon_sym_BQUOTE;
	v->a[32136] = actions(499);
	v->a[32137] = 2;
	v->a[32138] = sym_file_descriptor;
	v->a[32139] = sym_variable_name;
	small_parse_table_1607(v);
}

void	small_parse_table_1607(t_small_parse_table_array *v)
{
	v->a[32140] = state(412);
	v->a[32141] = 2;
	v->a[32142] = sym_concatenation;
	v->a[32143] = aux_sym_for_statement_repeat1;
	v->a[32144] = actions(1219);
	v->a[32145] = 3;
	v->a[32146] = sym_raw_string;
	v->a[32147] = sym_number;
	v->a[32148] = sym_word;
	v->a[32149] = state(751);
	v->a[32150] = 5;
	v->a[32151] = sym_arithmetic_expansion;
	v->a[32152] = sym_string;
	v->a[32153] = sym_simple_expansion;
	v->a[32154] = sym_expansion;
	v->a[32155] = sym_command_substitution;
	v->a[32156] = actions(504);
	v->a[32157] = 13;
	v->a[32158] = anon_sym_PIPE;
	v->a[32159] = anon_sym_AMP_AMP;
	small_parse_table_1608(v);
}

void	small_parse_table_1608(t_small_parse_table_array *v)
{
	v->a[32160] = anon_sym_PIPE_PIPE;
	v->a[32161] = anon_sym_LT;
	v->a[32162] = anon_sym_GT;
	v->a[32163] = anon_sym_GT_GT;
	v->a[32164] = anon_sym_LT_AMP;
	v->a[32165] = anon_sym_GT_AMP;
	v->a[32166] = anon_sym_GT_PIPE;
	v->a[32167] = anon_sym_LT_GT;
	v->a[32168] = anon_sym_LT_LT;
	v->a[32169] = anon_sym_LT_LT_DASH;
	v->a[32170] = aux_sym_heredoc_redirect_token1;
	v->a[32171] = 3;
	v->a[32172] = actions(3);
	v->a[32173] = 1;
	v->a[32174] = sym_comment;
	v->a[32175] = actions(1178);
	v->a[32176] = 4;
	v->a[32177] = sym_file_descriptor;
	v->a[32178] = sym__concat;
	v->a[32179] = sym__bare_dollar;
	small_parse_table_1609(v);
}

void	small_parse_table_1609(t_small_parse_table_array *v)
{
	v->a[32180] = ts_builtin_sym_end;
	v->a[32181] = actions(1176);
	v->a[32182] = 27;
	v->a[32183] = anon_sym_LPAREN;
	v->a[32184] = anon_sym_PIPE;
	v->a[32185] = anon_sym_SEMI_SEMI;
	v->a[32186] = anon_sym_AMP_AMP;
	v->a[32187] = anon_sym_PIPE_PIPE;
	v->a[32188] = anon_sym_LT;
	v->a[32189] = anon_sym_GT;
	v->a[32190] = anon_sym_GT_GT;
	v->a[32191] = anon_sym_LT_AMP;
	v->a[32192] = anon_sym_GT_AMP;
	v->a[32193] = anon_sym_GT_PIPE;
	v->a[32194] = anon_sym_LT_GT;
	v->a[32195] = anon_sym_LT_LT;
	v->a[32196] = anon_sym_LT_LT_DASH;
	v->a[32197] = aux_sym_heredoc_redirect_token1;
	v->a[32198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32199] = anon_sym_AMP;
	small_parse_table_1610(v);
}

/* EOF small_parse_table_321.c */
