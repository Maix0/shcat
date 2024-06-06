/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_512.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2560(t_small_parse_table_array *v)
{
	v->a[51200] = anon_sym_DOLLAR_LPAREN;
	v->a[51201] = anon_sym_BQUOTE;
	v->a[51202] = anon_sym_DOLLAR_BQUOTE;
	v->a[51203] = sym_word;
	v->a[51204] = anon_sym_SEMI;
	v->a[51205] = 3;
	v->a[51206] = actions(3);
	v->a[51207] = 1;
	v->a[51208] = sym_comment;
	v->a[51209] = actions(2908);
	v->a[51210] = 7;
	v->a[51211] = sym_file_descriptor;
	v->a[51212] = sym__concat;
	v->a[51213] = sym_variable_name;
	v->a[51214] = sym_test_operator;
	v->a[51215] = sym__brace_start;
	v->a[51216] = ts_builtin_sym_end;
	v->a[51217] = aux_sym_heredoc_redirect_token1;
	v->a[51218] = actions(2906);
	v->a[51219] = 32;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = anon_sym_PIPE;
	v->a[51221] = anon_sym_SEMI_SEMI;
	v->a[51222] = anon_sym_PIPE_AMP;
	v->a[51223] = anon_sym_AMP_AMP;
	v->a[51224] = anon_sym_PIPE_PIPE;
	v->a[51225] = anon_sym_LT;
	v->a[51226] = anon_sym_GT;
	v->a[51227] = anon_sym_GT_GT;
	v->a[51228] = anon_sym_AMP_GT;
	v->a[51229] = anon_sym_AMP_GT_GT;
	v->a[51230] = anon_sym_LT_AMP;
	v->a[51231] = anon_sym_GT_AMP;
	v->a[51232] = anon_sym_GT_PIPE;
	v->a[51233] = anon_sym_LT_AMP_DASH;
	v->a[51234] = anon_sym_GT_AMP_DASH;
	v->a[51235] = anon_sym_LT_LT;
	v->a[51236] = anon_sym_LT_LT_DASH;
	v->a[51237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51238] = anon_sym_AMP;
	v->a[51239] = aux_sym_concatenation_token1;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = anon_sym_DOLLAR;
	v->a[51241] = sym__special_character;
	v->a[51242] = anon_sym_DQUOTE;
	v->a[51243] = sym_raw_string;
	v->a[51244] = aux_sym_number_token1;
	v->a[51245] = aux_sym_number_token2;
	v->a[51246] = anon_sym_DOLLAR_LBRACE;
	v->a[51247] = anon_sym_DOLLAR_LPAREN;
	v->a[51248] = anon_sym_BQUOTE;
	v->a[51249] = anon_sym_DOLLAR_BQUOTE;
	v->a[51250] = sym_word;
	v->a[51251] = anon_sym_SEMI;
	v->a[51252] = 3;
	v->a[51253] = actions(3);
	v->a[51254] = 1;
	v->a[51255] = sym_comment;
	v->a[51256] = actions(3125);
	v->a[51257] = 6;
	v->a[51258] = sym_file_descriptor;
	v->a[51259] = sym__concat;
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = sym_test_operator;
	v->a[51261] = sym__bare_dollar;
	v->a[51262] = sym__brace_start;
	v->a[51263] = aux_sym_heredoc_redirect_token1;
	v->a[51264] = actions(3123);
	v->a[51265] = 33;
	v->a[51266] = anon_sym_PIPE;
	v->a[51267] = anon_sym_RPAREN;
	v->a[51268] = anon_sym_SEMI_SEMI;
	v->a[51269] = anon_sym_PIPE_AMP;
	v->a[51270] = anon_sym_AMP_AMP;
	v->a[51271] = anon_sym_PIPE_PIPE;
	v->a[51272] = anon_sym_LT;
	v->a[51273] = anon_sym_GT;
	v->a[51274] = anon_sym_GT_GT;
	v->a[51275] = anon_sym_AMP_GT;
	v->a[51276] = anon_sym_AMP_GT_GT;
	v->a[51277] = anon_sym_LT_AMP;
	v->a[51278] = anon_sym_GT_AMP;
	v->a[51279] = anon_sym_GT_PIPE;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = anon_sym_LT_AMP_DASH;
	v->a[51281] = anon_sym_GT_AMP_DASH;
	v->a[51282] = anon_sym_LT_LT;
	v->a[51283] = anon_sym_LT_LT_DASH;
	v->a[51284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51285] = anon_sym_AMP;
	v->a[51286] = aux_sym_concatenation_token1;
	v->a[51287] = anon_sym_DOLLAR;
	v->a[51288] = sym__special_character;
	v->a[51289] = anon_sym_DQUOTE;
	v->a[51290] = sym_raw_string;
	v->a[51291] = aux_sym_number_token1;
	v->a[51292] = aux_sym_number_token2;
	v->a[51293] = anon_sym_DOLLAR_LBRACE;
	v->a[51294] = anon_sym_DOLLAR_LPAREN;
	v->a[51295] = anon_sym_BQUOTE;
	v->a[51296] = anon_sym_DOLLAR_BQUOTE;
	v->a[51297] = sym_word;
	v->a[51298] = anon_sym_SEMI;
	v->a[51299] = 3;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
