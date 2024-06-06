/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_812.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4060(t_small_parse_table_array *v)
{
	v->a[81200] = sym_test_operator;
	v->a[81201] = sym_raw_string;
	v->a[81202] = state(1748);
	v->a[81203] = 2;
	v->a[81204] = sym_case_item;
	v->a[81205] = aux_sym_case_statement_repeat1;
	v->a[81206] = state(3472);
	v->a[81207] = 2;
	v->a[81208] = sym_concatenation;
	v->a[81209] = sym__extglob_blob;
	v->a[81210] = state(3295);
	v->a[81211] = 7;
	v->a[81212] = sym_arithmetic_expansion;
	v->a[81213] = sym_brace_expression;
	v->a[81214] = sym_string;
	v->a[81215] = sym_number;
	v->a[81216] = sym_simple_expansion;
	v->a[81217] = sym_expansion;
	v->a[81218] = sym_command_substitution;
	v->a[81219] = 3;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = actions(3);
	v->a[81221] = 1;
	v->a[81222] = sym_comment;
	v->a[81223] = actions(2828);
	v->a[81224] = 5;
	v->a[81225] = sym_file_descriptor;
	v->a[81226] = sym__concat;
	v->a[81227] = sym_test_operator;
	v->a[81228] = sym__brace_start;
	v->a[81229] = aux_sym_heredoc_redirect_token1;
	v->a[81230] = actions(2826);
	v->a[81231] = 25;
	v->a[81232] = anon_sym_AMP_AMP;
	v->a[81233] = anon_sym_PIPE_PIPE;
	v->a[81234] = anon_sym_LT;
	v->a[81235] = anon_sym_GT;
	v->a[81236] = anon_sym_GT_GT;
	v->a[81237] = anon_sym_AMP_GT;
	v->a[81238] = anon_sym_AMP_GT_GT;
	v->a[81239] = anon_sym_LT_AMP;
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = anon_sym_GT_AMP;
	v->a[81241] = anon_sym_GT_PIPE;
	v->a[81242] = anon_sym_LT_AMP_DASH;
	v->a[81243] = anon_sym_GT_AMP_DASH;
	v->a[81244] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81245] = aux_sym_concatenation_token1;
	v->a[81246] = anon_sym_DOLLAR;
	v->a[81247] = sym__special_character;
	v->a[81248] = anon_sym_DQUOTE;
	v->a[81249] = sym_raw_string;
	v->a[81250] = aux_sym_number_token1;
	v->a[81251] = aux_sym_number_token2;
	v->a[81252] = anon_sym_DOLLAR_LBRACE;
	v->a[81253] = anon_sym_DOLLAR_LPAREN;
	v->a[81254] = anon_sym_BQUOTE;
	v->a[81255] = anon_sym_DOLLAR_BQUOTE;
	v->a[81256] = sym_word;
	v->a[81257] = 22;
	v->a[81258] = actions(57);
	v->a[81259] = 1;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = sym_comment;
	v->a[81261] = actions(4328);
	v->a[81262] = 1;
	v->a[81263] = sym_word;
	v->a[81264] = actions(4340);
	v->a[81265] = 1;
	v->a[81266] = anon_sym_DOLLAR;
	v->a[81267] = actions(4346);
	v->a[81268] = 1;
	v->a[81269] = aux_sym_number_token1;
	v->a[81270] = actions(4348);
	v->a[81271] = 1;
	v->a[81272] = aux_sym_number_token2;
	v->a[81273] = actions(4352);
	v->a[81274] = 1;
	v->a[81275] = anon_sym_DOLLAR_LPAREN;
	v->a[81276] = actions(4360);
	v->a[81277] = 1;
	v->a[81278] = sym_extglob_pattern;
	v->a[81279] = actions(4362);
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = 1;
	v->a[81281] = sym__brace_start;
	v->a[81282] = actions(4426);
	v->a[81283] = 1;
	v->a[81284] = anon_sym_esac;
	v->a[81285] = actions(4548);
	v->a[81286] = 1;
	v->a[81287] = anon_sym_LPAREN;
	v->a[81288] = actions(4550);
	v->a[81289] = 1;
	v->a[81290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81291] = actions(4552);
	v->a[81292] = 1;
	v->a[81293] = sym__special_character;
	v->a[81294] = actions(4554);
	v->a[81295] = 1;
	v->a[81296] = anon_sym_DQUOTE;
	v->a[81297] = actions(4556);
	v->a[81298] = 1;
	v->a[81299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
