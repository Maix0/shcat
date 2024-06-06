/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1424.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7120(t_small_parse_table_array *v)
{
	v->a[142400] = state(976);
	v->a[142401] = 2;
	v->a[142402] = sym_expansion;
	v->a[142403] = sym_command_substitution;
	v->a[142404] = 5;
	v->a[142405] = actions(57);
	v->a[142406] = 1;
	v->a[142407] = sym_comment;
	v->a[142408] = actions(643);
	v->a[142409] = 1;
	v->a[142410] = anon_sym_LPAREN;
	v->a[142411] = actions(647);
	v->a[142412] = 1;
	v->a[142413] = anon_sym_LBRACE;
	v->a[142414] = actions(8509);
	v->a[142415] = 1;
	v->a[142416] = anon_sym_if;
	v->a[142417] = state(2704);
	v->a[142418] = 3;
	v->a[142419] = sym_if_statement;
	small_parse_table_7121(v);
}

void	small_parse_table_7121(t_small_parse_table_array *v)
{
	v->a[142420] = sym_compound_statement;
	v->a[142421] = sym_subshell;
	v->a[142422] = 6;
	v->a[142423] = actions(57);
	v->a[142424] = 1;
	v->a[142425] = sym_comment;
	v->a[142426] = actions(5905);
	v->a[142427] = 1;
	v->a[142428] = anon_sym_DOLLAR_LBRACE;
	v->a[142429] = actions(5907);
	v->a[142430] = 1;
	v->a[142431] = anon_sym_BQUOTE;
	v->a[142432] = actions(5909);
	v->a[142433] = 1;
	v->a[142434] = anon_sym_DOLLAR_BQUOTE;
	v->a[142435] = actions(8511);
	v->a[142436] = 1;
	v->a[142437] = anon_sym_DOLLAR_LPAREN;
	v->a[142438] = state(890);
	v->a[142439] = 2;
	small_parse_table_7122(v);
}

void	small_parse_table_7122(t_small_parse_table_array *v)
{
	v->a[142440] = sym_expansion;
	v->a[142441] = sym_command_substitution;
	v->a[142442] = 6;
	v->a[142443] = actions(57);
	v->a[142444] = 1;
	v->a[142445] = sym_comment;
	v->a[142446] = actions(5659);
	v->a[142447] = 1;
	v->a[142448] = anon_sym_DOLLAR_LBRACE;
	v->a[142449] = actions(5663);
	v->a[142450] = 1;
	v->a[142451] = anon_sym_BQUOTE;
	v->a[142452] = actions(5665);
	v->a[142453] = 1;
	v->a[142454] = anon_sym_DOLLAR_BQUOTE;
	v->a[142455] = actions(8513);
	v->a[142456] = 1;
	v->a[142457] = anon_sym_DOLLAR_LPAREN;
	v->a[142458] = state(2619);
	v->a[142459] = 2;
	small_parse_table_7123(v);
}

void	small_parse_table_7123(t_small_parse_table_array *v)
{
	v->a[142460] = sym_expansion;
	v->a[142461] = sym_command_substitution;
	v->a[142462] = 6;
	v->a[142463] = actions(57);
	v->a[142464] = 1;
	v->a[142465] = sym_comment;
	v->a[142466] = actions(8495);
	v->a[142467] = 1;
	v->a[142468] = anon_sym_elif;
	v->a[142469] = actions(8497);
	v->a[142470] = 1;
	v->a[142471] = anon_sym_else;
	v->a[142472] = actions(8515);
	v->a[142473] = 1;
	v->a[142474] = anon_sym_fi;
	v->a[142475] = state(3816);
	v->a[142476] = 1;
	v->a[142477] = sym_else_clause;
	v->a[142478] = state(3412);
	v->a[142479] = 2;
	small_parse_table_7124(v);
}

void	small_parse_table_7124(t_small_parse_table_array *v)
{
	v->a[142480] = sym_elif_clause;
	v->a[142481] = aux_sym_if_statement_repeat1;
	v->a[142482] = 6;
	v->a[142483] = actions(57);
	v->a[142484] = 1;
	v->a[142485] = sym_comment;
	v->a[142486] = actions(4602);
	v->a[142487] = 1;
	v->a[142488] = anon_sym_DOLLAR_LBRACE;
	v->a[142489] = actions(4604);
	v->a[142490] = 1;
	v->a[142491] = anon_sym_DOLLAR_LPAREN;
	v->a[142492] = actions(4606);
	v->a[142493] = 1;
	v->a[142494] = anon_sym_BQUOTE;
	v->a[142495] = actions(4608);
	v->a[142496] = 1;
	v->a[142497] = anon_sym_DOLLAR_BQUOTE;
	v->a[142498] = state(1497);
	v->a[142499] = 2;
	small_parse_table_7125(v);
}

/* EOF small_parse_table_1424.c */
