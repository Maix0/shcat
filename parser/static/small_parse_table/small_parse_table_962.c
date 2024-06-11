/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_962.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4810(t_small_parse_table_array *v)
{
	v->a[96200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96201] = actions(3862);
	v->a[96202] = 1;
	v->a[96203] = sym_string_content;
	v->a[96204] = actions(3864);
	v->a[96205] = 1;
	v->a[96206] = anon_sym_DOLLAR_LBRACE;
	v->a[96207] = actions(3866);
	v->a[96208] = 1;
	v->a[96209] = anon_sym_DOLLAR_LPAREN;
	v->a[96210] = actions(3868);
	v->a[96211] = 1;
	v->a[96212] = anon_sym_BQUOTE;
	v->a[96213] = actions(4104);
	v->a[96214] = 1;
	v->a[96215] = anon_sym_DOLLAR;
	v->a[96216] = actions(4106);
	v->a[96217] = 1;
	v->a[96218] = anon_sym_DQUOTE;
	v->a[96219] = state(1987);
	small_parse_table_4811(v);
}

void	small_parse_table_4811(t_small_parse_table_array *v)
{
	v->a[96220] = 1;
	v->a[96221] = aux_sym_string_repeat1;
	v->a[96222] = state(2107);
	v->a[96223] = 4;
	v->a[96224] = sym_arithmetic_expansion;
	v->a[96225] = sym_simple_expansion;
	v->a[96226] = sym_expansion;
	v->a[96227] = sym_command_substitution;
	v->a[96228] = 4;
	v->a[96229] = actions(3);
	v->a[96230] = 1;
	v->a[96231] = sym_comment;
	v->a[96232] = actions(4110);
	v->a[96233] = 1;
	v->a[96234] = anon_sym_esac;
	v->a[96235] = actions(4112);
	v->a[96236] = 1;
	v->a[96237] = sym_extglob_pattern;
	v->a[96238] = actions(4108);
	v->a[96239] = 10;
	small_parse_table_4812(v);
}

void	small_parse_table_4812(t_small_parse_table_array *v)
{
	v->a[96240] = anon_sym_LPAREN;
	v->a[96241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96242] = anon_sym_DOLLAR;
	v->a[96243] = anon_sym_DQUOTE;
	v->a[96244] = sym_raw_string;
	v->a[96245] = sym_number;
	v->a[96246] = anon_sym_DOLLAR_LBRACE;
	v->a[96247] = anon_sym_DOLLAR_LPAREN;
	v->a[96248] = anon_sym_BQUOTE;
	v->a[96249] = sym_word;
	v->a[96250] = 10;
	v->a[96251] = actions(3);
	v->a[96252] = 1;
	v->a[96253] = sym_comment;
	v->a[96254] = actions(3856);
	v->a[96255] = 1;
	v->a[96256] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96257] = actions(3862);
	v->a[96258] = 1;
	v->a[96259] = sym_string_content;
	small_parse_table_4813(v);
}

void	small_parse_table_4813(t_small_parse_table_array *v)
{
	v->a[96260] = actions(3864);
	v->a[96261] = 1;
	v->a[96262] = anon_sym_DOLLAR_LBRACE;
	v->a[96263] = actions(3866);
	v->a[96264] = 1;
	v->a[96265] = anon_sym_DOLLAR_LPAREN;
	v->a[96266] = actions(3868);
	v->a[96267] = 1;
	v->a[96268] = anon_sym_BQUOTE;
	v->a[96269] = actions(4114);
	v->a[96270] = 1;
	v->a[96271] = anon_sym_DOLLAR;
	v->a[96272] = actions(4116);
	v->a[96273] = 1;
	v->a[96274] = anon_sym_DQUOTE;
	v->a[96275] = state(2057);
	v->a[96276] = 1;
	v->a[96277] = aux_sym_string_repeat1;
	v->a[96278] = state(2107);
	v->a[96279] = 4;
	small_parse_table_4814(v);
}

void	small_parse_table_4814(t_small_parse_table_array *v)
{
	v->a[96280] = sym_arithmetic_expansion;
	v->a[96281] = sym_simple_expansion;
	v->a[96282] = sym_expansion;
	v->a[96283] = sym_command_substitution;
	v->a[96284] = 4;
	v->a[96285] = actions(3);
	v->a[96286] = 1;
	v->a[96287] = sym_comment;
	v->a[96288] = actions(393);
	v->a[96289] = 1;
	v->a[96290] = sym_variable_name;
	v->a[96291] = actions(391);
	v->a[96292] = 2;
	v->a[96293] = aux_sym__simple_variable_name_token1;
	v->a[96294] = aux_sym__multiline_variable_name_token1;
	v->a[96295] = actions(389);
	v->a[96296] = 9;
	v->a[96297] = anon_sym_BANG;
	v->a[96298] = anon_sym_DASH;
	v->a[96299] = anon_sym_STAR;
	small_parse_table_4815(v);
}

/* EOF small_parse_table_962.c */
