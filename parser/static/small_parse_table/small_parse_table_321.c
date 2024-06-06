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
	v->a[32100] = sym__bare_dollar;
	v->a[32101] = sym__brace_start;
	v->a[32102] = ts_builtin_sym_end;
	v->a[32103] = aux_sym_heredoc_redirect_token1;
	v->a[32104] = actions(2662);
	v->a[32105] = 32;
	v->a[32106] = anon_sym_LPAREN;
	v->a[32107] = anon_sym_PIPE;
	v->a[32108] = anon_sym_SEMI_SEMI;
	v->a[32109] = anon_sym_PIPE_AMP;
	v->a[32110] = anon_sym_AMP_AMP;
	v->a[32111] = anon_sym_PIPE_PIPE;
	v->a[32112] = anon_sym_LT;
	v->a[32113] = anon_sym_GT;
	v->a[32114] = anon_sym_GT_GT;
	v->a[32115] = anon_sym_AMP_GT;
	v->a[32116] = anon_sym_AMP_GT_GT;
	v->a[32117] = anon_sym_LT_AMP;
	v->a[32118] = anon_sym_GT_AMP;
	v->a[32119] = anon_sym_GT_PIPE;
	small_parse_table_1606(v);
}

void	small_parse_table_1606(t_small_parse_table_array *v)
{
	v->a[32120] = anon_sym_LT_AMP_DASH;
	v->a[32121] = anon_sym_GT_AMP_DASH;
	v->a[32122] = anon_sym_LT_LT;
	v->a[32123] = anon_sym_LT_LT_DASH;
	v->a[32124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32125] = anon_sym_AMP;
	v->a[32126] = anon_sym_DOLLAR;
	v->a[32127] = sym__special_character;
	v->a[32128] = anon_sym_DQUOTE;
	v->a[32129] = sym_raw_string;
	v->a[32130] = aux_sym_number_token1;
	v->a[32131] = aux_sym_number_token2;
	v->a[32132] = anon_sym_DOLLAR_LBRACE;
	v->a[32133] = anon_sym_DOLLAR_LPAREN;
	v->a[32134] = anon_sym_BQUOTE;
	v->a[32135] = anon_sym_DOLLAR_BQUOTE;
	v->a[32136] = sym_word;
	v->a[32137] = anon_sym_SEMI;
	v->a[32138] = 3;
	v->a[32139] = actions(3);
	small_parse_table_1607(v);
}

void	small_parse_table_1607(t_small_parse_table_array *v)
{
	v->a[32140] = 1;
	v->a[32141] = sym_comment;
	v->a[32142] = actions(2828);
	v->a[32143] = 6;
	v->a[32144] = sym_file_descriptor;
	v->a[32145] = sym__concat;
	v->a[32146] = sym_variable_name;
	v->a[32147] = sym_test_operator;
	v->a[32148] = sym__brace_start;
	v->a[32149] = aux_sym_heredoc_redirect_token1;
	v->a[32150] = actions(2826);
	v->a[32151] = 35;
	v->a[32152] = anon_sym_esac;
	v->a[32153] = anon_sym_PIPE;
	v->a[32154] = anon_sym_SEMI_SEMI;
	v->a[32155] = anon_sym_SEMI_AMP;
	v->a[32156] = anon_sym_SEMI_SEMI_AMP;
	v->a[32157] = anon_sym_PIPE_AMP;
	v->a[32158] = anon_sym_AMP_AMP;
	v->a[32159] = anon_sym_PIPE_PIPE;
	small_parse_table_1608(v);
}

void	small_parse_table_1608(t_small_parse_table_array *v)
{
	v->a[32160] = anon_sym_LT;
	v->a[32161] = anon_sym_GT;
	v->a[32162] = anon_sym_GT_GT;
	v->a[32163] = anon_sym_AMP_GT;
	v->a[32164] = anon_sym_AMP_GT_GT;
	v->a[32165] = anon_sym_LT_AMP;
	v->a[32166] = anon_sym_GT_AMP;
	v->a[32167] = anon_sym_GT_PIPE;
	v->a[32168] = anon_sym_LT_AMP_DASH;
	v->a[32169] = anon_sym_GT_AMP_DASH;
	v->a[32170] = anon_sym_LT_LT;
	v->a[32171] = anon_sym_LT_LT_DASH;
	v->a[32172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32173] = anon_sym_AMP;
	v->a[32174] = aux_sym_concatenation_token1;
	v->a[32175] = anon_sym_DOLLAR;
	v->a[32176] = sym__special_character;
	v->a[32177] = anon_sym_DQUOTE;
	v->a[32178] = sym_raw_string;
	v->a[32179] = aux_sym_number_token1;
	small_parse_table_1609(v);
}

void	small_parse_table_1609(t_small_parse_table_array *v)
{
	v->a[32180] = aux_sym_number_token2;
	v->a[32181] = anon_sym_DOLLAR_LBRACE;
	v->a[32182] = anon_sym_DOLLAR_LPAREN;
	v->a[32183] = anon_sym_BQUOTE;
	v->a[32184] = anon_sym_DOLLAR_BQUOTE;
	v->a[32185] = sym_word;
	v->a[32186] = anon_sym_SEMI;
	v->a[32187] = 3;
	v->a[32188] = actions(3);
	v->a[32189] = 1;
	v->a[32190] = sym_comment;
	v->a[32191] = actions(2888);
	v->a[32192] = 5;
	v->a[32193] = sym_file_descriptor;
	v->a[32194] = sym__concat;
	v->a[32195] = sym_test_operator;
	v->a[32196] = sym__brace_start;
	v->a[32197] = aux_sym_heredoc_redirect_token1;
	v->a[32198] = actions(2886);
	v->a[32199] = 36;
	small_parse_table_1610(v);
}

/* EOF small_parse_table_321.c */
