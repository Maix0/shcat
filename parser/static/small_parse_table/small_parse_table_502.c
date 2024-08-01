/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_502.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2510(t_small_parse_table_array *v)
{
	v->a[50200] = anon_sym_BQUOTE;
	v->a[50201] = actions(2465);
	v->a[50202] = 1;
	v->a[50203] = anon_sym_DOLLAR;
	v->a[50204] = actions(2467);
	v->a[50205] = 1;
	v->a[50206] = anon_sym_DQUOTE;
	v->a[50207] = state(1136);
	v->a[50208] = 1;
	v->a[50209] = aux_sym_string_repeat1;
	v->a[50210] = state(1394);
	v->a[50211] = 4;
	v->a[50212] = sym_arithmetic_expansion;
	v->a[50213] = sym_simple_expansion;
	v->a[50214] = sym_expansion;
	v->a[50215] = sym_command_substitution;
	v->a[50216] = 4;
	v->a[50217] = actions(3);
	v->a[50218] = 1;
	v->a[50219] = sym_comment;
	small_parse_table_2511(v);
}

void	small_parse_table_2511(t_small_parse_table_array *v)
{
	v->a[50220] = actions(2471);
	v->a[50221] = 1;
	v->a[50222] = anon_sym_esac;
	v->a[50223] = actions(2473);
	v->a[50224] = 1;
	v->a[50225] = sym_extglob_pattern;
	v->a[50226] = actions(2469);
	v->a[50227] = 10;
	v->a[50228] = anon_sym_LPAREN;
	v->a[50229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50230] = anon_sym_DOLLAR;
	v->a[50231] = anon_sym_DQUOTE;
	v->a[50232] = sym_raw_string;
	v->a[50233] = sym_number;
	v->a[50234] = anon_sym_DOLLAR_LBRACE;
	v->a[50235] = anon_sym_DOLLAR_LPAREN;
	v->a[50236] = anon_sym_BQUOTE;
	v->a[50237] = sym_word;
	v->a[50238] = 4;
	v->a[50239] = actions(3);
	small_parse_table_2512(v);
}

void	small_parse_table_2512(t_small_parse_table_array *v)
{
	v->a[50240] = 1;
	v->a[50241] = sym_comment;
	v->a[50242] = actions(2477);
	v->a[50243] = 1;
	v->a[50244] = anon_sym_esac;
	v->a[50245] = actions(2479);
	v->a[50246] = 1;
	v->a[50247] = sym_extglob_pattern;
	v->a[50248] = actions(2475);
	v->a[50249] = 10;
	v->a[50250] = anon_sym_LPAREN;
	v->a[50251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50252] = anon_sym_DOLLAR;
	v->a[50253] = anon_sym_DQUOTE;
	v->a[50254] = sym_raw_string;
	v->a[50255] = sym_number;
	v->a[50256] = anon_sym_DOLLAR_LBRACE;
	v->a[50257] = anon_sym_DOLLAR_LPAREN;
	v->a[50258] = anon_sym_BQUOTE;
	v->a[50259] = sym_word;
	small_parse_table_2513(v);
}

void	small_parse_table_2513(t_small_parse_table_array *v)
{
	v->a[50260] = 10;
	v->a[50261] = actions(3);
	v->a[50262] = 1;
	v->a[50263] = sym_comment;
	v->a[50264] = actions(2293);
	v->a[50265] = 1;
	v->a[50266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50267] = actions(2299);
	v->a[50268] = 1;
	v->a[50269] = sym_string_content;
	v->a[50270] = actions(2301);
	v->a[50271] = 1;
	v->a[50272] = anon_sym_DOLLAR_LBRACE;
	v->a[50273] = actions(2303);
	v->a[50274] = 1;
	v->a[50275] = anon_sym_DOLLAR_LPAREN;
	v->a[50276] = actions(2305);
	v->a[50277] = 1;
	v->a[50278] = anon_sym_BQUOTE;
	v->a[50279] = actions(2481);
	small_parse_table_2514(v);
}

void	small_parse_table_2514(t_small_parse_table_array *v)
{
	v->a[50280] = 1;
	v->a[50281] = anon_sym_DOLLAR;
	v->a[50282] = actions(2483);
	v->a[50283] = 1;
	v->a[50284] = anon_sym_DQUOTE;
	v->a[50285] = state(1176);
	v->a[50286] = 1;
	v->a[50287] = aux_sym_string_repeat1;
	v->a[50288] = state(1394);
	v->a[50289] = 4;
	v->a[50290] = sym_arithmetic_expansion;
	v->a[50291] = sym_simple_expansion;
	v->a[50292] = sym_expansion;
	v->a[50293] = sym_command_substitution;
	v->a[50294] = 10;
	v->a[50295] = actions(3);
	v->a[50296] = 1;
	v->a[50297] = sym_comment;
	v->a[50298] = actions(2293);
	v->a[50299] = 1;
	small_parse_table_2515(v);
}

/* EOF small_parse_table_502.c */
