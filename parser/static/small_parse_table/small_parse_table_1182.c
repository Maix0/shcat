/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1182.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5910(t_small_parse_table_array *v)
{
	v->a[118200] = actions(1262);
	v->a[118201] = 1;
	v->a[118202] = aux_sym_number_token2;
	v->a[118203] = actions(1266);
	v->a[118204] = 1;
	v->a[118205] = anon_sym_DOLLAR_LPAREN;
	v->a[118206] = actions(1276);
	v->a[118207] = 1;
	v->a[118208] = sym__brace_start;
	v->a[118209] = actions(6879);
	v->a[118210] = 1;
	v->a[118211] = sym_word;
	v->a[118212] = actions(6881);
	v->a[118213] = 1;
	v->a[118214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118215] = actions(6885);
	v->a[118216] = 1;
	v->a[118217] = sym__special_character;
	v->a[118218] = actions(6887);
	v->a[118219] = 1;
	small_parse_table_5911(v);
}

void	small_parse_table_5911(t_small_parse_table_array *v)
{
	v->a[118220] = anon_sym_DQUOTE;
	v->a[118221] = actions(6891);
	v->a[118222] = 1;
	v->a[118223] = anon_sym_DOLLAR_LBRACE;
	v->a[118224] = actions(6893);
	v->a[118225] = 1;
	v->a[118226] = anon_sym_BQUOTE;
	v->a[118227] = actions(6895);
	v->a[118228] = 1;
	v->a[118229] = anon_sym_DOLLAR_BQUOTE;
	v->a[118230] = actions(6897);
	v->a[118231] = 1;
	v->a[118232] = sym__comment_word;
	v->a[118233] = actions(6951);
	v->a[118234] = 1;
	v->a[118235] = anon_sym_DOLLAR;
	v->a[118236] = actions(6889);
	v->a[118237] = 3;
	v->a[118238] = sym_test_operator;
	v->a[118239] = sym__bare_dollar;
	small_parse_table_5912(v);
}

void	small_parse_table_5912(t_small_parse_table_array *v)
{
	v->a[118240] = sym_raw_string;
	v->a[118241] = state(1005);
	v->a[118242] = 7;
	v->a[118243] = sym_arithmetic_expansion;
	v->a[118244] = sym_brace_expression;
	v->a[118245] = sym_string;
	v->a[118246] = sym_number;
	v->a[118247] = sym_simple_expansion;
	v->a[118248] = sym_expansion;
	v->a[118249] = sym_command_substitution;
	v->a[118250] = 16;
	v->a[118251] = actions(3);
	v->a[118252] = 1;
	v->a[118253] = sym_comment;
	v->a[118254] = actions(1973);
	v->a[118255] = 1;
	v->a[118256] = anon_sym_DOLLAR;
	v->a[118257] = actions(1979);
	v->a[118258] = 1;
	v->a[118259] = aux_sym_number_token1;
	small_parse_table_5913(v);
}

void	small_parse_table_5913(t_small_parse_table_array *v)
{
	v->a[118260] = actions(1981);
	v->a[118261] = 1;
	v->a[118262] = aux_sym_number_token2;
	v->a[118263] = actions(1985);
	v->a[118264] = 1;
	v->a[118265] = anon_sym_DOLLAR_LPAREN;
	v->a[118266] = actions(1993);
	v->a[118267] = 1;
	v->a[118268] = sym__brace_start;
	v->a[118269] = actions(6246);
	v->a[118270] = 1;
	v->a[118271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118272] = actions(6250);
	v->a[118273] = 1;
	v->a[118274] = anon_sym_DQUOTE;
	v->a[118275] = actions(6252);
	v->a[118276] = 1;
	v->a[118277] = anon_sym_DOLLAR_LBRACE;
	v->a[118278] = actions(6254);
	v->a[118279] = 1;
	small_parse_table_5914(v);
}

void	small_parse_table_5914(t_small_parse_table_array *v)
{
	v->a[118280] = anon_sym_BQUOTE;
	v->a[118281] = actions(6256);
	v->a[118282] = 1;
	v->a[118283] = anon_sym_DOLLAR_BQUOTE;
	v->a[118284] = actions(6615);
	v->a[118285] = 1;
	v->a[118286] = sym_word;
	v->a[118287] = actions(6619);
	v->a[118288] = 1;
	v->a[118289] = sym__special_character;
	v->a[118290] = actions(6623);
	v->a[118291] = 1;
	v->a[118292] = sym__comment_word;
	v->a[118293] = actions(6621);
	v->a[118294] = 3;
	v->a[118295] = sym_test_operator;
	v->a[118296] = sym__bare_dollar;
	v->a[118297] = sym_raw_string;
	v->a[118298] = state(981);
	v->a[118299] = 7;
	small_parse_table_5915(v);
}

/* EOF small_parse_table_1182.c */
