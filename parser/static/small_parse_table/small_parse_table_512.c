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
	v->a[51200] = actions(3);
	v->a[51201] = 1;
	v->a[51202] = sym_comment;
	v->a[51203] = actions(678);
	v->a[51204] = 2;
	v->a[51205] = sym_file_descriptor;
	v->a[51206] = sym_variable_name;
	v->a[51207] = state(865);
	v->a[51208] = 2;
	v->a[51209] = sym_concatenation;
	v->a[51210] = aux_sym_for_statement_repeat1;
	v->a[51211] = state(959);
	v->a[51212] = 5;
	v->a[51213] = sym_arithmetic_expansion;
	v->a[51214] = sym_string;
	v->a[51215] = sym_simple_expansion;
	v->a[51216] = sym_expansion;
	v->a[51217] = sym_command_substitution;
	v->a[51218] = actions(676);
	v->a[51219] = 16;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = anon_sym_LT;
	v->a[51221] = anon_sym_GT;
	v->a[51222] = anon_sym_GT_GT;
	v->a[51223] = anon_sym_LT_AMP;
	v->a[51224] = anon_sym_GT_AMP;
	v->a[51225] = anon_sym_GT_PIPE;
	v->a[51226] = anon_sym_LT_GT;
	v->a[51227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51228] = anon_sym_DOLLAR;
	v->a[51229] = anon_sym_DQUOTE;
	v->a[51230] = sym_raw_string;
	v->a[51231] = sym_number;
	v->a[51232] = anon_sym_DOLLAR_LBRACE;
	v->a[51233] = anon_sym_DOLLAR_LPAREN;
	v->a[51234] = anon_sym_BQUOTE;
	v->a[51235] = sym_word;
	v->a[51236] = 3;
	v->a[51237] = actions(3);
	v->a[51238] = 1;
	v->a[51239] = sym_comment;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = actions(1110);
	v->a[51241] = 3;
	v->a[51242] = sym_file_descriptor;
	v->a[51243] = sym__concat;
	v->a[51244] = sym__bare_dollar;
	v->a[51245] = actions(1105);
	v->a[51246] = 22;
	v->a[51247] = anon_sym_PIPE;
	v->a[51248] = anon_sym_AMP_AMP;
	v->a[51249] = anon_sym_PIPE_PIPE;
	v->a[51250] = anon_sym_LT;
	v->a[51251] = anon_sym_GT;
	v->a[51252] = anon_sym_GT_GT;
	v->a[51253] = anon_sym_LT_AMP;
	v->a[51254] = anon_sym_GT_AMP;
	v->a[51255] = anon_sym_GT_PIPE;
	v->a[51256] = anon_sym_LT_GT;
	v->a[51257] = anon_sym_LT_LT;
	v->a[51258] = anon_sym_LT_LT_DASH;
	v->a[51259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = aux_sym_concatenation_token1;
	v->a[51261] = anon_sym_DOLLAR;
	v->a[51262] = anon_sym_DQUOTE;
	v->a[51263] = sym_raw_string;
	v->a[51264] = sym_number;
	v->a[51265] = anon_sym_DOLLAR_LBRACE;
	v->a[51266] = anon_sym_DOLLAR_LPAREN;
	v->a[51267] = anon_sym_BQUOTE;
	v->a[51268] = sym_word;
	v->a[51269] = 3;
	v->a[51270] = actions(3);
	v->a[51271] = 1;
	v->a[51272] = sym_comment;
	v->a[51273] = actions(686);
	v->a[51274] = 3;
	v->a[51275] = sym_file_descriptor;
	v->a[51276] = sym__concat;
	v->a[51277] = sym_variable_name;
	v->a[51278] = actions(684);
	v->a[51279] = 22;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = anon_sym_PIPE;
	v->a[51281] = anon_sym_AMP_AMP;
	v->a[51282] = anon_sym_PIPE_PIPE;
	v->a[51283] = anon_sym_LT;
	v->a[51284] = anon_sym_GT;
	v->a[51285] = anon_sym_GT_GT;
	v->a[51286] = anon_sym_LT_AMP;
	v->a[51287] = anon_sym_GT_AMP;
	v->a[51288] = anon_sym_GT_PIPE;
	v->a[51289] = anon_sym_LT_GT;
	v->a[51290] = anon_sym_LT_LT;
	v->a[51291] = anon_sym_LT_LT_DASH;
	v->a[51292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51293] = aux_sym_concatenation_token1;
	v->a[51294] = anon_sym_DOLLAR;
	v->a[51295] = anon_sym_DQUOTE;
	v->a[51296] = sym_raw_string;
	v->a[51297] = sym_number;
	v->a[51298] = anon_sym_DOLLAR_LBRACE;
	v->a[51299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
