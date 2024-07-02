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
	v->a[51200] = anon_sym_BQUOTE;
	v->a[51201] = sym_word;
	v->a[51202] = 5;
	v->a[51203] = actions(3);
	v->a[51204] = 1;
	v->a[51205] = sym_comment;
	v->a[51206] = actions(511);
	v->a[51207] = 2;
	v->a[51208] = sym_file_descriptor;
	v->a[51209] = sym_variable_name;
	v->a[51210] = state(852);
	v->a[51211] = 2;
	v->a[51212] = sym_concatenation;
	v->a[51213] = aux_sym_for_statement_repeat1;
	v->a[51214] = state(1079);
	v->a[51215] = 5;
	v->a[51216] = sym_arithmetic_expansion;
	v->a[51217] = sym_string;
	v->a[51218] = sym_simple_expansion;
	v->a[51219] = sym_expansion;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = sym_command_substitution;
	v->a[51221] = actions(509);
	v->a[51222] = 16;
	v->a[51223] = anon_sym_LT;
	v->a[51224] = anon_sym_GT;
	v->a[51225] = anon_sym_GT_GT;
	v->a[51226] = anon_sym_LT_AMP;
	v->a[51227] = anon_sym_GT_AMP;
	v->a[51228] = anon_sym_GT_PIPE;
	v->a[51229] = anon_sym_LT_GT;
	v->a[51230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51231] = anon_sym_DOLLAR;
	v->a[51232] = anon_sym_DQUOTE;
	v->a[51233] = sym_raw_string;
	v->a[51234] = sym_number;
	v->a[51235] = anon_sym_DOLLAR_LBRACE;
	v->a[51236] = anon_sym_DOLLAR_LPAREN;
	v->a[51237] = anon_sym_BQUOTE;
	v->a[51238] = sym_word;
	v->a[51239] = 3;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = actions(3);
	v->a[51241] = 1;
	v->a[51242] = sym_comment;
	v->a[51243] = actions(1200);
	v->a[51244] = 3;
	v->a[51245] = sym_file_descriptor;
	v->a[51246] = sym__concat;
	v->a[51247] = sym_variable_name;
	v->a[51248] = actions(1198);
	v->a[51249] = 22;
	v->a[51250] = anon_sym_PIPE;
	v->a[51251] = anon_sym_AMP_AMP;
	v->a[51252] = anon_sym_PIPE_PIPE;
	v->a[51253] = anon_sym_LT;
	v->a[51254] = anon_sym_GT;
	v->a[51255] = anon_sym_GT_GT;
	v->a[51256] = anon_sym_LT_AMP;
	v->a[51257] = anon_sym_GT_AMP;
	v->a[51258] = anon_sym_GT_PIPE;
	v->a[51259] = anon_sym_LT_GT;
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = anon_sym_LT_LT;
	v->a[51261] = anon_sym_LT_LT_DASH;
	v->a[51262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51263] = aux_sym_concatenation_token1;
	v->a[51264] = anon_sym_DOLLAR;
	v->a[51265] = anon_sym_DQUOTE;
	v->a[51266] = sym_raw_string;
	v->a[51267] = sym_number;
	v->a[51268] = anon_sym_DOLLAR_LBRACE;
	v->a[51269] = anon_sym_DOLLAR_LPAREN;
	v->a[51270] = anon_sym_BQUOTE;
	v->a[51271] = sym_word;
	v->a[51272] = 3;
	v->a[51273] = actions(3);
	v->a[51274] = 1;
	v->a[51275] = sym_comment;
	v->a[51276] = actions(757);
	v->a[51277] = 3;
	v->a[51278] = sym_file_descriptor;
	v->a[51279] = sym__concat;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = sym__bare_dollar;
	v->a[51281] = actions(755);
	v->a[51282] = 22;
	v->a[51283] = anon_sym_PIPE;
	v->a[51284] = anon_sym_AMP_AMP;
	v->a[51285] = anon_sym_PIPE_PIPE;
	v->a[51286] = anon_sym_LT;
	v->a[51287] = anon_sym_GT;
	v->a[51288] = anon_sym_GT_GT;
	v->a[51289] = anon_sym_LT_AMP;
	v->a[51290] = anon_sym_GT_AMP;
	v->a[51291] = anon_sym_GT_PIPE;
	v->a[51292] = anon_sym_LT_GT;
	v->a[51293] = anon_sym_LT_LT;
	v->a[51294] = anon_sym_LT_LT_DASH;
	v->a[51295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51296] = aux_sym_concatenation_token1;
	v->a[51297] = anon_sym_DOLLAR;
	v->a[51298] = anon_sym_DQUOTE;
	v->a[51299] = sym_raw_string;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
