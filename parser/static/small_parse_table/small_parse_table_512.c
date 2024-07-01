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
	v->a[51200] = anon_sym_GT_AMP_DASH;
	v->a[51201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51202] = anon_sym_DOLLAR;
	v->a[51203] = anon_sym_DQUOTE;
	v->a[51204] = sym_raw_string;
	v->a[51205] = sym_number;
	v->a[51206] = anon_sym_DOLLAR_LBRACE;
	v->a[51207] = anon_sym_DOLLAR_LPAREN;
	v->a[51208] = sym_word;
	v->a[51209] = 4;
	v->a[51210] = actions(3);
	v->a[51211] = 1;
	v->a[51212] = sym_comment;
	v->a[51213] = actions(1575);
	v->a[51214] = 1;
	v->a[51215] = anon_sym_BQUOTE;
	v->a[51216] = actions(1577);
	v->a[51217] = 2;
	v->a[51218] = sym_file_descriptor;
	v->a[51219] = sym_variable_name;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = actions(1573);
	v->a[51221] = 24;
	v->a[51222] = anon_sym_for;
	v->a[51223] = anon_sym_while;
	v->a[51224] = anon_sym_until;
	v->a[51225] = anon_sym_if;
	v->a[51226] = anon_sym_case;
	v->a[51227] = anon_sym_LPAREN;
	v->a[51228] = anon_sym_LBRACE;
	v->a[51229] = anon_sym_BANG;
	v->a[51230] = anon_sym_LT;
	v->a[51231] = anon_sym_GT;
	v->a[51232] = anon_sym_GT_GT;
	v->a[51233] = anon_sym_LT_AMP;
	v->a[51234] = anon_sym_GT_AMP;
	v->a[51235] = anon_sym_GT_PIPE;
	v->a[51236] = anon_sym_LT_AMP_DASH;
	v->a[51237] = anon_sym_GT_AMP_DASH;
	v->a[51238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51239] = anon_sym_DOLLAR;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = anon_sym_DQUOTE;
	v->a[51241] = sym_raw_string;
	v->a[51242] = sym_number;
	v->a[51243] = anon_sym_DOLLAR_LBRACE;
	v->a[51244] = anon_sym_DOLLAR_LPAREN;
	v->a[51245] = sym_word;
	v->a[51246] = 6;
	v->a[51247] = actions(3);
	v->a[51248] = 1;
	v->a[51249] = sym_comment;
	v->a[51250] = actions(1814);
	v->a[51251] = 1;
	v->a[51252] = aux_sym_concatenation_token1;
	v->a[51253] = actions(1816);
	v->a[51254] = 1;
	v->a[51255] = sym__concat;
	v->a[51256] = state(852);
	v->a[51257] = 1;
	v->a[51258] = aux_sym_concatenation_repeat1;
	v->a[51259] = actions(1303);
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = 2;
	v->a[51261] = sym_file_descriptor;
	v->a[51262] = sym_variable_name;
	v->a[51263] = actions(1301);
	v->a[51264] = 22;
	v->a[51265] = anon_sym_PIPE;
	v->a[51266] = anon_sym_AMP_AMP;
	v->a[51267] = anon_sym_PIPE_PIPE;
	v->a[51268] = anon_sym_LT;
	v->a[51269] = anon_sym_GT;
	v->a[51270] = anon_sym_GT_GT;
	v->a[51271] = anon_sym_LT_AMP;
	v->a[51272] = anon_sym_GT_AMP;
	v->a[51273] = anon_sym_GT_PIPE;
	v->a[51274] = anon_sym_LT_AMP_DASH;
	v->a[51275] = anon_sym_GT_AMP_DASH;
	v->a[51276] = anon_sym_LT_LT;
	v->a[51277] = anon_sym_LT_LT_DASH;
	v->a[51278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51279] = anon_sym_DOLLAR;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = anon_sym_DQUOTE;
	v->a[51281] = sym_raw_string;
	v->a[51282] = sym_number;
	v->a[51283] = anon_sym_DOLLAR_LBRACE;
	v->a[51284] = anon_sym_DOLLAR_LPAREN;
	v->a[51285] = anon_sym_BQUOTE;
	v->a[51286] = sym_word;
	v->a[51287] = 3;
	v->a[51288] = actions(3);
	v->a[51289] = 1;
	v->a[51290] = sym_comment;
	v->a[51291] = actions(970);
	v->a[51292] = 3;
	v->a[51293] = sym_file_descriptor;
	v->a[51294] = sym__concat;
	v->a[51295] = sym__bare_dollar;
	v->a[51296] = actions(968);
	v->a[51297] = 24;
	v->a[51298] = anon_sym_LPAREN;
	v->a[51299] = anon_sym_PIPE;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
