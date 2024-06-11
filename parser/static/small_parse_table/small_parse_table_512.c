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
	v->a[51200] = anon_sym_while;
	v->a[51201] = anon_sym_until;
	v->a[51202] = anon_sym_if;
	v->a[51203] = anon_sym_case;
	v->a[51204] = anon_sym_LPAREN;
	v->a[51205] = anon_sym_LBRACE;
	v->a[51206] = anon_sym_BANG;
	v->a[51207] = anon_sym_LT;
	v->a[51208] = anon_sym_GT;
	v->a[51209] = anon_sym_GT_GT;
	v->a[51210] = anon_sym_AMP_GT;
	v->a[51211] = anon_sym_AMP_GT_GT;
	v->a[51212] = anon_sym_LT_AMP;
	v->a[51213] = anon_sym_GT_AMP;
	v->a[51214] = anon_sym_GT_PIPE;
	v->a[51215] = anon_sym_LT_AMP_DASH;
	v->a[51216] = anon_sym_GT_AMP_DASH;
	v->a[51217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51218] = anon_sym_DOLLAR;
	v->a[51219] = anon_sym_DQUOTE;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = sym_raw_string;
	v->a[51221] = sym_number;
	v->a[51222] = anon_sym_DOLLAR_LBRACE;
	v->a[51223] = anon_sym_DOLLAR_LPAREN;
	v->a[51224] = anon_sym_BQUOTE;
	v->a[51225] = sym_word;
	v->a[51226] = 7;
	v->a[51227] = actions(3);
	v->a[51228] = 1;
	v->a[51229] = sym_comment;
	v->a[51230] = actions(1565);
	v->a[51231] = 1;
	v->a[51232] = sym_file_descriptor;
	v->a[51233] = actions(1568);
	v->a[51234] = 1;
	v->a[51235] = sym_variable_name;
	v->a[51236] = actions(1683);
	v->a[51237] = 1;
	v->a[51238] = anon_sym_RPAREN;
	v->a[51239] = actions(1558);
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = 9;
	v->a[51241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51242] = anon_sym_DOLLAR;
	v->a[51243] = anon_sym_DQUOTE;
	v->a[51244] = sym_raw_string;
	v->a[51245] = sym_number;
	v->a[51246] = anon_sym_DOLLAR_LBRACE;
	v->a[51247] = anon_sym_DOLLAR_LPAREN;
	v->a[51248] = anon_sym_BQUOTE;
	v->a[51249] = sym_word;
	v->a[51250] = actions(1560);
	v->a[51251] = 9;
	v->a[51252] = anon_sym_PIPE;
	v->a[51253] = anon_sym_SEMI_SEMI;
	v->a[51254] = anon_sym_AMP_AMP;
	v->a[51255] = anon_sym_PIPE_PIPE;
	v->a[51256] = anon_sym_LT_LT;
	v->a[51257] = anon_sym_LT_LT_DASH;
	v->a[51258] = aux_sym_heredoc_redirect_token1;
	v->a[51259] = anon_sym_AMP;
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = anon_sym_SEMI;
	v->a[51261] = actions(1562);
	v->a[51262] = 10;
	v->a[51263] = anon_sym_LT;
	v->a[51264] = anon_sym_GT;
	v->a[51265] = anon_sym_GT_GT;
	v->a[51266] = anon_sym_AMP_GT;
	v->a[51267] = anon_sym_AMP_GT_GT;
	v->a[51268] = anon_sym_LT_AMP;
	v->a[51269] = anon_sym_GT_AMP;
	v->a[51270] = anon_sym_GT_PIPE;
	v->a[51271] = anon_sym_LT_AMP_DASH;
	v->a[51272] = anon_sym_GT_AMP_DASH;
	v->a[51273] = 7;
	v->a[51274] = actions(3);
	v->a[51275] = 1;
	v->a[51276] = sym_comment;
	v->a[51277] = actions(1565);
	v->a[51278] = 1;
	v->a[51279] = sym_file_descriptor;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = actions(1568);
	v->a[51281] = 1;
	v->a[51282] = sym_variable_name;
	v->a[51283] = actions(1686);
	v->a[51284] = 1;
	v->a[51285] = anon_sym_RPAREN;
	v->a[51286] = actions(1558);
	v->a[51287] = 9;
	v->a[51288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51289] = anon_sym_DOLLAR;
	v->a[51290] = anon_sym_DQUOTE;
	v->a[51291] = sym_raw_string;
	v->a[51292] = sym_number;
	v->a[51293] = anon_sym_DOLLAR_LBRACE;
	v->a[51294] = anon_sym_DOLLAR_LPAREN;
	v->a[51295] = anon_sym_BQUOTE;
	v->a[51296] = sym_word;
	v->a[51297] = actions(1560);
	v->a[51298] = 9;
	v->a[51299] = anon_sym_PIPE;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
