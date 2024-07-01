/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_883.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4415(t_small_parse_table_array *v)
{
	v->a[88300] = anon_sym_POUND;
	v->a[88301] = anon_sym_AT;
	v->a[88302] = anon_sym_0;
	v->a[88303] = anon_sym__;
	v->a[88304] = 4;
	v->a[88305] = actions(3);
	v->a[88306] = 1;
	v->a[88307] = sym_comment;
	v->a[88308] = actions(3642);
	v->a[88309] = 1;
	v->a[88310] = anon_sym_esac;
	v->a[88311] = actions(3644);
	v->a[88312] = 1;
	v->a[88313] = sym_extglob_pattern;
	v->a[88314] = actions(3640);
	v->a[88315] = 10;
	v->a[88316] = anon_sym_LPAREN;
	v->a[88317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88318] = anon_sym_DOLLAR;
	v->a[88319] = anon_sym_DQUOTE;
	small_parse_table_4416(v);
}

void	small_parse_table_4416(t_small_parse_table_array *v)
{
	v->a[88320] = sym_raw_string;
	v->a[88321] = sym_number;
	v->a[88322] = anon_sym_DOLLAR_LBRACE;
	v->a[88323] = anon_sym_DOLLAR_LPAREN;
	v->a[88324] = anon_sym_BQUOTE;
	v->a[88325] = sym_word;
	v->a[88326] = 10;
	v->a[88327] = actions(3);
	v->a[88328] = 1;
	v->a[88329] = sym_comment;
	v->a[88330] = actions(3414);
	v->a[88331] = 1;
	v->a[88332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88333] = actions(3420);
	v->a[88334] = 1;
	v->a[88335] = sym_string_content;
	v->a[88336] = actions(3422);
	v->a[88337] = 1;
	v->a[88338] = anon_sym_DOLLAR_LBRACE;
	v->a[88339] = actions(3424);
	small_parse_table_4417(v);
}

void	small_parse_table_4417(t_small_parse_table_array *v)
{
	v->a[88340] = 1;
	v->a[88341] = anon_sym_DOLLAR_LPAREN;
	v->a[88342] = actions(3426);
	v->a[88343] = 1;
	v->a[88344] = anon_sym_BQUOTE;
	v->a[88345] = actions(3664);
	v->a[88346] = 1;
	v->a[88347] = anon_sym_DOLLAR;
	v->a[88348] = actions(3666);
	v->a[88349] = 1;
	v->a[88350] = anon_sym_DQUOTE;
	v->a[88351] = state(1906);
	v->a[88352] = 1;
	v->a[88353] = aux_sym_string_repeat1;
	v->a[88354] = state(1959);
	v->a[88355] = 4;
	v->a[88356] = sym_arithmetic_expansion;
	v->a[88357] = sym_simple_expansion;
	v->a[88358] = sym_expansion;
	v->a[88359] = sym_command_substitution;
	small_parse_table_4418(v);
}

void	small_parse_table_4418(t_small_parse_table_array *v)
{
	v->a[88360] = 4;
	v->a[88361] = actions(3);
	v->a[88362] = 1;
	v->a[88363] = sym_comment;
	v->a[88364] = actions(3670);
	v->a[88365] = 1;
	v->a[88366] = anon_sym_esac;
	v->a[88367] = actions(3672);
	v->a[88368] = 1;
	v->a[88369] = sym_extglob_pattern;
	v->a[88370] = actions(3668);
	v->a[88371] = 10;
	v->a[88372] = anon_sym_LPAREN;
	v->a[88373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88374] = anon_sym_DOLLAR;
	v->a[88375] = anon_sym_DQUOTE;
	v->a[88376] = sym_raw_string;
	v->a[88377] = sym_number;
	v->a[88378] = anon_sym_DOLLAR_LBRACE;
	v->a[88379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4419(v);
}

void	small_parse_table_4419(t_small_parse_table_array *v)
{
	v->a[88380] = anon_sym_BQUOTE;
	v->a[88381] = sym_word;
	v->a[88382] = 4;
	v->a[88383] = actions(3);
	v->a[88384] = 1;
	v->a[88385] = sym_comment;
	v->a[88386] = actions(3676);
	v->a[88387] = 1;
	v->a[88388] = anon_sym_esac;
	v->a[88389] = actions(3678);
	v->a[88390] = 1;
	v->a[88391] = sym_extglob_pattern;
	v->a[88392] = actions(3674);
	v->a[88393] = 10;
	v->a[88394] = anon_sym_LPAREN;
	v->a[88395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88396] = anon_sym_DOLLAR;
	v->a[88397] = anon_sym_DQUOTE;
	v->a[88398] = sym_raw_string;
	v->a[88399] = sym_number;
	small_parse_table_4420(v);
}

/* EOF small_parse_table_883.c */
