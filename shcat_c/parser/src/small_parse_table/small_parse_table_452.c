/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_452.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2260(t_small_parse_table_array *v)
{
	v->a[45200] = sym_file_descriptor;
	v->a[45201] = sym_variable_name;
	v->a[45202] = sym_test_operator;
	v->a[45203] = sym__brace_start;
	v->a[45204] = aux_sym_heredoc_redirect_token1;
	v->a[45205] = actions(1261);
	v->a[45206] = 40;
	v->a[45207] = anon_sym_LPAREN_LPAREN;
	v->a[45208] = anon_sym_SEMI;
	v->a[45209] = anon_sym_PIPE_PIPE;
	v->a[45210] = anon_sym_AMP_AMP;
	v->a[45211] = anon_sym_PIPE;
	v->a[45212] = anon_sym_AMP;
	v->a[45213] = anon_sym_LT;
	v->a[45214] = anon_sym_GT;
	v->a[45215] = anon_sym_LT_LT;
	v->a[45216] = anon_sym_GT_GT;
	v->a[45217] = anon_sym_esac;
	v->a[45218] = anon_sym_SEMI_SEMI;
	v->a[45219] = anon_sym_SEMI_AMP;
	small_parse_table_2261(v);
}

void	small_parse_table_2261(t_small_parse_table_array *v)
{
	v->a[45220] = anon_sym_SEMI_SEMI_AMP;
	v->a[45221] = anon_sym_PIPE_AMP;
	v->a[45222] = anon_sym_AMP_GT;
	v->a[45223] = anon_sym_AMP_GT_GT;
	v->a[45224] = anon_sym_LT_AMP;
	v->a[45225] = anon_sym_GT_AMP;
	v->a[45226] = anon_sym_GT_PIPE;
	v->a[45227] = anon_sym_LT_AMP_DASH;
	v->a[45228] = anon_sym_GT_AMP_DASH;
	v->a[45229] = anon_sym_LT_LT_DASH;
	v->a[45230] = anon_sym_LT_LT_LT;
	v->a[45231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45232] = anon_sym_DOLLAR_LBRACK;
	v->a[45233] = anon_sym_DOLLAR;
	v->a[45234] = sym__special_character;
	v->a[45235] = anon_sym_DQUOTE;
	v->a[45236] = sym_raw_string;
	v->a[45237] = sym_ansi_c_string;
	v->a[45238] = aux_sym_number_token1;
	v->a[45239] = aux_sym_number_token2;
	small_parse_table_2262(v);
}

void	small_parse_table_2262(t_small_parse_table_array *v)
{
	v->a[45240] = anon_sym_DOLLAR_LBRACE;
	v->a[45241] = anon_sym_DOLLAR_LPAREN;
	v->a[45242] = anon_sym_BQUOTE;
	v->a[45243] = anon_sym_DOLLAR_BQUOTE;
	v->a[45244] = anon_sym_LT_LPAREN;
	v->a[45245] = anon_sym_GT_LPAREN;
	v->a[45246] = sym_word;
	v->a[45247] = 22;
	v->a[45248] = actions(71);
	v->a[45249] = 1;
	v->a[45250] = sym_comment;
	v->a[45251] = actions(5257);
	v->a[45252] = 1;
	v->a[45253] = sym_word;
	v->a[45254] = actions(5261);
	v->a[45255] = 1;
	v->a[45256] = anon_sym_DOLLAR_LBRACK;
	v->a[45257] = actions(5263);
	v->a[45258] = 1;
	v->a[45259] = anon_sym_DOLLAR;
	small_parse_table_2263(v);
}

void	small_parse_table_2263(t_small_parse_table_array *v)
{
	v->a[45260] = actions(5265);
	v->a[45261] = 1;
	v->a[45262] = sym__special_character;
	v->a[45263] = actions(5267);
	v->a[45264] = 1;
	v->a[45265] = anon_sym_DQUOTE;
	v->a[45266] = actions(5271);
	v->a[45267] = 1;
	v->a[45268] = aux_sym_number_token1;
	v->a[45269] = actions(5273);
	v->a[45270] = 1;
	v->a[45271] = aux_sym_number_token2;
	v->a[45272] = actions(5275);
	v->a[45273] = 1;
	v->a[45274] = anon_sym_DOLLAR_LBRACE;
	v->a[45275] = actions(5277);
	v->a[45276] = 1;
	v->a[45277] = anon_sym_DOLLAR_LPAREN;
	v->a[45278] = actions(5279);
	v->a[45279] = 1;
	small_parse_table_2264(v);
}

void	small_parse_table_2264(t_small_parse_table_array *v)
{
	v->a[45280] = anon_sym_BQUOTE;
	v->a[45281] = actions(5281);
	v->a[45282] = 1;
	v->a[45283] = anon_sym_DOLLAR_BQUOTE;
	v->a[45284] = actions(5285);
	v->a[45285] = 1;
	v->a[45286] = sym_test_operator;
	v->a[45287] = actions(5287);
	v->a[45288] = 1;
	v->a[45289] = sym__brace_start;
	v->a[45290] = state(5437);
	v->a[45291] = 1;
	v->a[45292] = aux_sym__literal_repeat1;
	v->a[45293] = state(5604);
	v->a[45294] = 1;
	v->a[45295] = sym_concatenation;
	v->a[45296] = actions(5259);
	v->a[45297] = 2;
	v->a[45298] = anon_sym_LPAREN_LPAREN;
	v->a[45299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2265(v);
}

/* EOF small_parse_table_452.c */
