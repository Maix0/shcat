/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_622.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3110(t_small_parse_table_array *v)
{
	v->a[62200] = 1;
	v->a[62201] = anon_sym_DQUOTE;
	v->a[62202] = state(1370);
	v->a[62203] = 1;
	v->a[62204] = aux_sym_string_repeat1;
	v->a[62205] = state(1477);
	v->a[62206] = 4;
	v->a[62207] = sym_arithmetic_expansion;
	v->a[62208] = sym_simple_expansion;
	v->a[62209] = sym_expansion;
	v->a[62210] = sym_command_substitution;
	v->a[62211] = 4;
	v->a[62212] = actions(3);
	v->a[62213] = 1;
	v->a[62214] = sym_comment;
	v->a[62215] = actions(2661);
	v->a[62216] = 1;
	v->a[62217] = anon_sym_esac;
	v->a[62218] = actions(2663);
	v->a[62219] = 1;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = sym_extglob_pattern;
	v->a[62221] = actions(2659);
	v->a[62222] = 10;
	v->a[62223] = anon_sym_LPAREN;
	v->a[62224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62225] = anon_sym_DOLLAR;
	v->a[62226] = anon_sym_DQUOTE;
	v->a[62227] = sym_raw_string;
	v->a[62228] = sym_number;
	v->a[62229] = anon_sym_DOLLAR_LBRACE;
	v->a[62230] = anon_sym_DOLLAR_LPAREN;
	v->a[62231] = anon_sym_BQUOTE;
	v->a[62232] = sym_word;
	v->a[62233] = 10;
	v->a[62234] = actions(3);
	v->a[62235] = 1;
	v->a[62236] = sym_comment;
	v->a[62237] = actions(2548);
	v->a[62238] = 1;
	v->a[62239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = actions(2554);
	v->a[62241] = 1;
	v->a[62242] = sym_string_content;
	v->a[62243] = actions(2556);
	v->a[62244] = 1;
	v->a[62245] = anon_sym_DOLLAR_LBRACE;
	v->a[62246] = actions(2558);
	v->a[62247] = 1;
	v->a[62248] = anon_sym_DOLLAR_LPAREN;
	v->a[62249] = actions(2560);
	v->a[62250] = 1;
	v->a[62251] = anon_sym_BQUOTE;
	v->a[62252] = actions(2665);
	v->a[62253] = 1;
	v->a[62254] = anon_sym_DOLLAR;
	v->a[62255] = actions(2667);
	v->a[62256] = 1;
	v->a[62257] = anon_sym_DQUOTE;
	v->a[62258] = state(1370);
	v->a[62259] = 1;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = aux_sym_string_repeat1;
	v->a[62261] = state(1477);
	v->a[62262] = 4;
	v->a[62263] = sym_arithmetic_expansion;
	v->a[62264] = sym_simple_expansion;
	v->a[62265] = sym_expansion;
	v->a[62266] = sym_command_substitution;
	v->a[62267] = 8;
	v->a[62268] = actions(3);
	v->a[62269] = 1;
	v->a[62270] = sym_comment;
	v->a[62271] = actions(2566);
	v->a[62272] = 1;
	v->a[62273] = anon_sym_POUND;
	v->a[62274] = actions(2568);
	v->a[62275] = 1;
	v->a[62276] = aux_sym__simple_variable_name_token1;
	v->a[62277] = actions(2570);
	v->a[62278] = 1;
	v->a[62279] = anon_sym_0;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = actions(2572);
	v->a[62281] = 1;
	v->a[62282] = sym_variable_name;
	v->a[62283] = actions(2669);
	v->a[62284] = 1;
	v->a[62285] = anon_sym_RBRACE;
	v->a[62286] = state(1643);
	v->a[62287] = 1;
	v->a[62288] = sym__expansion_body;
	v->a[62289] = actions(2564);
	v->a[62290] = 6;
	v->a[62291] = anon_sym_BANG;
	v->a[62292] = anon_sym_DASH;
	v->a[62293] = anon_sym_STAR;
	v->a[62294] = anon_sym_QMARK;
	v->a[62295] = anon_sym_DOLLAR;
	v->a[62296] = anon_sym_AT;
	v->a[62297] = 10;
	v->a[62298] = actions(3);
	v->a[62299] = 1;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
