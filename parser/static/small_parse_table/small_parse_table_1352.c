/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1352.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6760(t_small_parse_table_array *v)
{
	v->a[135200] = anon_sym_DOLLAR_LPAREN;
	v->a[135201] = actions(7772);
	v->a[135202] = 1;
	v->a[135203] = anon_sym_BQUOTE;
	v->a[135204] = actions(7774);
	v->a[135205] = 1;
	v->a[135206] = anon_sym_DOLLAR_BQUOTE;
	v->a[135207] = actions(7830);
	v->a[135208] = 1;
	v->a[135209] = anon_sym_DOLLAR;
	v->a[135210] = state(3061);
	v->a[135211] = 1;
	v->a[135212] = aux_sym_string_repeat1;
	v->a[135213] = state(3218);
	v->a[135214] = 4;
	v->a[135215] = sym_arithmetic_expansion;
	v->a[135216] = sym_simple_expansion;
	v->a[135217] = sym_expansion;
	v->a[135218] = sym_command_substitution;
	v->a[135219] = 11;
	small_parse_table_6761(v);
}

void	small_parse_table_6761(t_small_parse_table_array *v)
{
	v->a[135220] = actions(3);
	v->a[135221] = 1;
	v->a[135222] = sym_comment;
	v->a[135223] = actions(7664);
	v->a[135224] = 1;
	v->a[135225] = anon_sym_DQUOTE;
	v->a[135226] = actions(7760);
	v->a[135227] = 1;
	v->a[135228] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135229] = actions(7766);
	v->a[135230] = 1;
	v->a[135231] = sym_string_content;
	v->a[135232] = actions(7768);
	v->a[135233] = 1;
	v->a[135234] = anon_sym_DOLLAR_LBRACE;
	v->a[135235] = actions(7770);
	v->a[135236] = 1;
	v->a[135237] = anon_sym_DOLLAR_LPAREN;
	v->a[135238] = actions(7772);
	v->a[135239] = 1;
	small_parse_table_6762(v);
}

void	small_parse_table_6762(t_small_parse_table_array *v)
{
	v->a[135240] = anon_sym_BQUOTE;
	v->a[135241] = actions(7774);
	v->a[135242] = 1;
	v->a[135243] = anon_sym_DOLLAR_BQUOTE;
	v->a[135244] = actions(7832);
	v->a[135245] = 1;
	v->a[135246] = anon_sym_DOLLAR;
	v->a[135247] = state(3061);
	v->a[135248] = 1;
	v->a[135249] = aux_sym_string_repeat1;
	v->a[135250] = state(3218);
	v->a[135251] = 4;
	v->a[135252] = sym_arithmetic_expansion;
	v->a[135253] = sym_simple_expansion;
	v->a[135254] = sym_expansion;
	v->a[135255] = sym_command_substitution;
	v->a[135256] = 7;
	v->a[135257] = actions(3);
	v->a[135258] = 1;
	v->a[135259] = sym_comment;
	small_parse_table_6763(v);
}

void	small_parse_table_6763(t_small_parse_table_array *v)
{
	v->a[135260] = actions(7754);
	v->a[135261] = 1;
	v->a[135262] = aux_sym__simple_variable_name_token1;
	v->a[135263] = actions(7758);
	v->a[135264] = 1;
	v->a[135265] = sym_variable_name;
	v->a[135266] = actions(7834);
	v->a[135267] = 1;
	v->a[135268] = anon_sym_RBRACE3;
	v->a[135269] = state(3733);
	v->a[135270] = 1;
	v->a[135271] = sym__expansion_body;
	v->a[135272] = actions(7756);
	v->a[135273] = 2;
	v->a[135274] = anon_sym_0;
	v->a[135275] = anon_sym__;
	v->a[135276] = actions(7750);
	v->a[135277] = 7;
	v->a[135278] = anon_sym_BANG;
	v->a[135279] = anon_sym_DASH;
	small_parse_table_6764(v);
}

void	small_parse_table_6764(t_small_parse_table_array *v)
{
	v->a[135280] = anon_sym_STAR;
	v->a[135281] = anon_sym_QMARK;
	v->a[135282] = anon_sym_DOLLAR;
	v->a[135283] = anon_sym_POUND;
	v->a[135284] = anon_sym_AT;
	v->a[135285] = 11;
	v->a[135286] = actions(3);
	v->a[135287] = 1;
	v->a[135288] = sym_comment;
	v->a[135289] = actions(7760);
	v->a[135290] = 1;
	v->a[135291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135292] = actions(7766);
	v->a[135293] = 1;
	v->a[135294] = sym_string_content;
	v->a[135295] = actions(7768);
	v->a[135296] = 1;
	v->a[135297] = anon_sym_DOLLAR_LBRACE;
	v->a[135298] = actions(7770);
	v->a[135299] = 1;
	small_parse_table_6765(v);
}

/* EOF small_parse_table_1352.c */
