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
	v->a[51200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51201] = actions(1784);
	v->a[51202] = 1;
	v->a[51203] = anon_sym_DOLLAR;
	v->a[51204] = actions(1787);
	v->a[51205] = 1;
	v->a[51206] = anon_sym_DQUOTE;
	v->a[51207] = actions(1790);
	v->a[51208] = 1;
	v->a[51209] = anon_sym_DOLLAR_LBRACE;
	v->a[51210] = actions(1793);
	v->a[51211] = 1;
	v->a[51212] = anon_sym_DOLLAR_LPAREN;
	v->a[51213] = actions(1796);
	v->a[51214] = 1;
	v->a[51215] = anon_sym_BQUOTE;
	v->a[51216] = actions(499);
	v->a[51217] = 2;
	v->a[51218] = sym_file_descriptor;
	v->a[51219] = sym_variable_name;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = state(854);
	v->a[51221] = 2;
	v->a[51222] = sym_concatenation;
	v->a[51223] = aux_sym_for_statement_repeat1;
	v->a[51224] = actions(1778);
	v->a[51225] = 3;
	v->a[51226] = sym_raw_string;
	v->a[51227] = sym_number;
	v->a[51228] = sym_word;
	v->a[51229] = state(1048);
	v->a[51230] = 5;
	v->a[51231] = sym_arithmetic_expansion;
	v->a[51232] = sym_string;
	v->a[51233] = sym_simple_expansion;
	v->a[51234] = sym_expansion;
	v->a[51235] = sym_command_substitution;
	v->a[51236] = actions(504);
	v->a[51237] = 7;
	v->a[51238] = anon_sym_LT;
	v->a[51239] = anon_sym_GT;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = anon_sym_GT_GT;
	v->a[51241] = anon_sym_LT_AMP;
	v->a[51242] = anon_sym_GT_AMP;
	v->a[51243] = anon_sym_GT_PIPE;
	v->a[51244] = anon_sym_LT_GT;
	v->a[51245] = 3;
	v->a[51246] = actions(3);
	v->a[51247] = 1;
	v->a[51248] = sym_comment;
	v->a[51249] = actions(662);
	v->a[51250] = 3;
	v->a[51251] = sym_file_descriptor;
	v->a[51252] = sym__concat;
	v->a[51253] = sym__bare_dollar;
	v->a[51254] = actions(660);
	v->a[51255] = 22;
	v->a[51256] = anon_sym_PIPE;
	v->a[51257] = anon_sym_AMP_AMP;
	v->a[51258] = anon_sym_PIPE_PIPE;
	v->a[51259] = anon_sym_LT;
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = anon_sym_GT;
	v->a[51261] = anon_sym_GT_GT;
	v->a[51262] = anon_sym_LT_AMP;
	v->a[51263] = anon_sym_GT_AMP;
	v->a[51264] = anon_sym_GT_PIPE;
	v->a[51265] = anon_sym_LT_GT;
	v->a[51266] = anon_sym_LT_LT;
	v->a[51267] = anon_sym_LT_LT_DASH;
	v->a[51268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51269] = aux_sym_concatenation_token1;
	v->a[51270] = anon_sym_DOLLAR;
	v->a[51271] = anon_sym_DQUOTE;
	v->a[51272] = sym_raw_string;
	v->a[51273] = sym_number;
	v->a[51274] = anon_sym_DOLLAR_LBRACE;
	v->a[51275] = anon_sym_DOLLAR_LPAREN;
	v->a[51276] = anon_sym_BQUOTE;
	v->a[51277] = sym_word;
	v->a[51278] = 3;
	v->a[51279] = actions(3);
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = 1;
	v->a[51281] = sym_comment;
	v->a[51282] = actions(662);
	v->a[51283] = 3;
	v->a[51284] = sym_file_descriptor;
	v->a[51285] = sym__concat;
	v->a[51286] = sym__bare_dollar;
	v->a[51287] = actions(660);
	v->a[51288] = 22;
	v->a[51289] = anon_sym_PIPE;
	v->a[51290] = anon_sym_AMP_AMP;
	v->a[51291] = anon_sym_PIPE_PIPE;
	v->a[51292] = anon_sym_LT;
	v->a[51293] = anon_sym_GT;
	v->a[51294] = anon_sym_GT_GT;
	v->a[51295] = anon_sym_LT_AMP;
	v->a[51296] = anon_sym_GT_AMP;
	v->a[51297] = anon_sym_GT_PIPE;
	v->a[51298] = anon_sym_LT_GT;
	v->a[51299] = anon_sym_LT_LT;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
