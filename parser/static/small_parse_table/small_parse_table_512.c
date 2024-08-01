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
	v->a[51200] = actions(2571);
	v->a[51201] = 1;
	v->a[51202] = anon_sym_DQUOTE;
	v->a[51203] = actions(2573);
	v->a[51204] = 1;
	v->a[51205] = sym_string_content;
	v->a[51206] = actions(2576);
	v->a[51207] = 1;
	v->a[51208] = anon_sym_DOLLAR_LBRACE;
	v->a[51209] = actions(2579);
	v->a[51210] = 1;
	v->a[51211] = anon_sym_DOLLAR_LPAREN;
	v->a[51212] = actions(2582);
	v->a[51213] = 1;
	v->a[51214] = anon_sym_BQUOTE;
	v->a[51215] = state(1176);
	v->a[51216] = 1;
	v->a[51217] = aux_sym_string_repeat1;
	v->a[51218] = state(1394);
	v->a[51219] = 4;
	small_parse_table_2561(v);
}

void	small_parse_table_2561(t_small_parse_table_array *v)
{
	v->a[51220] = sym_arithmetic_expansion;
	v->a[51221] = sym_simple_expansion;
	v->a[51222] = sym_expansion;
	v->a[51223] = sym_command_substitution;
	v->a[51224] = 10;
	v->a[51225] = actions(3);
	v->a[51226] = 1;
	v->a[51227] = sym_comment;
	v->a[51228] = actions(2293);
	v->a[51229] = 1;
	v->a[51230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51231] = actions(2299);
	v->a[51232] = 1;
	v->a[51233] = sym_string_content;
	v->a[51234] = actions(2301);
	v->a[51235] = 1;
	v->a[51236] = anon_sym_DOLLAR_LBRACE;
	v->a[51237] = actions(2303);
	v->a[51238] = 1;
	v->a[51239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2562(v);
}

void	small_parse_table_2562(t_small_parse_table_array *v)
{
	v->a[51240] = actions(2305);
	v->a[51241] = 1;
	v->a[51242] = anon_sym_BQUOTE;
	v->a[51243] = actions(2585);
	v->a[51244] = 1;
	v->a[51245] = anon_sym_DOLLAR;
	v->a[51246] = actions(2587);
	v->a[51247] = 1;
	v->a[51248] = anon_sym_DQUOTE;
	v->a[51249] = state(1176);
	v->a[51250] = 1;
	v->a[51251] = aux_sym_string_repeat1;
	v->a[51252] = state(1394);
	v->a[51253] = 4;
	v->a[51254] = sym_arithmetic_expansion;
	v->a[51255] = sym_simple_expansion;
	v->a[51256] = sym_expansion;
	v->a[51257] = sym_command_substitution;
	v->a[51258] = 5;
	v->a[51259] = actions(3);
	small_parse_table_2563(v);
}

void	small_parse_table_2563(t_small_parse_table_array *v)
{
	v->a[51260] = 1;
	v->a[51261] = sym_comment;
	v->a[51262] = actions(1974);
	v->a[51263] = 1;
	v->a[51264] = aux_sym_heredoc_redirect_token1;
	v->a[51265] = actions(2589);
	v->a[51266] = 1;
	v->a[51267] = anon_sym_PIPE;
	v->a[51268] = state(1178);
	v->a[51269] = 1;
	v->a[51270] = aux_sym_pipeline_repeat1;
	v->a[51271] = actions(1979);
	v->a[51272] = 9;
	v->a[51273] = anon_sym_SEMI_SEMI;
	v->a[51274] = anon_sym_AMP_AMP;
	v->a[51275] = anon_sym_PIPE_PIPE;
	v->a[51276] = anon_sym_LT;
	v->a[51277] = anon_sym_GT;
	v->a[51278] = anon_sym_GT_GT;
	v->a[51279] = anon_sym_LT_LT;
	small_parse_table_2564(v);
}

void	small_parse_table_2564(t_small_parse_table_array *v)
{
	v->a[51280] = anon_sym_BQUOTE;
	v->a[51281] = anon_sym_SEMI;
	v->a[51282] = 4;
	v->a[51283] = actions(3);
	v->a[51284] = 1;
	v->a[51285] = sym_comment;
	v->a[51286] = actions(2594);
	v->a[51287] = 1;
	v->a[51288] = anon_sym_esac;
	v->a[51289] = actions(2596);
	v->a[51290] = 1;
	v->a[51291] = sym_extglob_pattern;
	v->a[51292] = actions(2592);
	v->a[51293] = 10;
	v->a[51294] = anon_sym_LPAREN;
	v->a[51295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51296] = anon_sym_DOLLAR;
	v->a[51297] = anon_sym_DQUOTE;
	v->a[51298] = sym_raw_string;
	v->a[51299] = sym_number;
	small_parse_table_2565(v);
}

/* EOF small_parse_table_512.c */
