/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_862.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4310(t_small_parse_table_array *v)
{
	v->a[86200] = 1;
	v->a[86201] = sym_comment;
	v->a[86202] = actions(3600);
	v->a[86203] = 1;
	v->a[86204] = anon_sym_esac;
	v->a[86205] = actions(3602);
	v->a[86206] = 1;
	v->a[86207] = sym_extglob_pattern;
	v->a[86208] = actions(3598);
	v->a[86209] = 11;
	v->a[86210] = anon_sym_LPAREN;
	v->a[86211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86212] = anon_sym_DOLLAR;
	v->a[86213] = anon_sym_DQUOTE;
	v->a[86214] = sym_raw_string;
	v->a[86215] = aux_sym_number_token1;
	v->a[86216] = aux_sym_number_token2;
	v->a[86217] = anon_sym_DOLLAR_LBRACE;
	v->a[86218] = anon_sym_DOLLAR_LPAREN;
	v->a[86219] = anon_sym_BQUOTE;
	small_parse_table_4311(v);
}

void	small_parse_table_4311(t_small_parse_table_array *v)
{
	v->a[86220] = sym_word;
	v->a[86221] = 7;
	v->a[86222] = actions(3);
	v->a[86223] = 1;
	v->a[86224] = sym_comment;
	v->a[86225] = actions(3590);
	v->a[86226] = 1;
	v->a[86227] = aux_sym__simple_variable_name_token1;
	v->a[86228] = actions(3594);
	v->a[86229] = 1;
	v->a[86230] = sym_variable_name;
	v->a[86231] = actions(3604);
	v->a[86232] = 1;
	v->a[86233] = anon_sym_RBRACE;
	v->a[86234] = state(2096);
	v->a[86235] = 1;
	v->a[86236] = sym__expansion_body;
	v->a[86237] = actions(3592);
	v->a[86238] = 2;
	v->a[86239] = anon_sym_0;
	small_parse_table_4312(v);
}

void	small_parse_table_4312(t_small_parse_table_array *v)
{
	v->a[86240] = anon_sym__;
	v->a[86241] = actions(3588);
	v->a[86242] = 7;
	v->a[86243] = anon_sym_BANG;
	v->a[86244] = anon_sym_DASH;
	v->a[86245] = anon_sym_STAR;
	v->a[86246] = anon_sym_QMARK;
	v->a[86247] = anon_sym_DOLLAR;
	v->a[86248] = anon_sym_POUND;
	v->a[86249] = anon_sym_AT;
	v->a[86250] = 4;
	v->a[86251] = actions(3);
	v->a[86252] = 1;
	v->a[86253] = sym_comment;
	v->a[86254] = actions(3608);
	v->a[86255] = 1;
	v->a[86256] = anon_sym_esac;
	v->a[86257] = actions(3610);
	v->a[86258] = 1;
	v->a[86259] = sym_extglob_pattern;
	small_parse_table_4313(v);
}

void	small_parse_table_4313(t_small_parse_table_array *v)
{
	v->a[86260] = actions(3606);
	v->a[86261] = 11;
	v->a[86262] = anon_sym_LPAREN;
	v->a[86263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86264] = anon_sym_DOLLAR;
	v->a[86265] = anon_sym_DQUOTE;
	v->a[86266] = sym_raw_string;
	v->a[86267] = aux_sym_number_token1;
	v->a[86268] = aux_sym_number_token2;
	v->a[86269] = anon_sym_DOLLAR_LBRACE;
	v->a[86270] = anon_sym_DOLLAR_LPAREN;
	v->a[86271] = anon_sym_BQUOTE;
	v->a[86272] = sym_word;
	v->a[86273] = 7;
	v->a[86274] = actions(3);
	v->a[86275] = 1;
	v->a[86276] = sym_comment;
	v->a[86277] = actions(3590);
	v->a[86278] = 1;
	v->a[86279] = aux_sym__simple_variable_name_token1;
	small_parse_table_4314(v);
}

void	small_parse_table_4314(t_small_parse_table_array *v)
{
	v->a[86280] = actions(3594);
	v->a[86281] = 1;
	v->a[86282] = sym_variable_name;
	v->a[86283] = actions(3612);
	v->a[86284] = 1;
	v->a[86285] = anon_sym_RBRACE;
	v->a[86286] = state(2152);
	v->a[86287] = 1;
	v->a[86288] = sym__expansion_body;
	v->a[86289] = actions(3592);
	v->a[86290] = 2;
	v->a[86291] = anon_sym_0;
	v->a[86292] = anon_sym__;
	v->a[86293] = actions(3588);
	v->a[86294] = 7;
	v->a[86295] = anon_sym_BANG;
	v->a[86296] = anon_sym_DASH;
	v->a[86297] = anon_sym_STAR;
	v->a[86298] = anon_sym_QMARK;
	v->a[86299] = anon_sym_DOLLAR;
	small_parse_table_4315(v);
}

/* EOF small_parse_table_862.c */
