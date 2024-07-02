/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_695.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3475(t_small_parse_table_array *v)
{
	v->a[69500] = sym_simple_expansion;
	v->a[69501] = sym_expansion;
	v->a[69502] = sym_command_substitution;
	v->a[69503] = 10;
	v->a[69504] = actions(3);
	v->a[69505] = 1;
	v->a[69506] = sym_comment;
	v->a[69507] = actions(2410);
	v->a[69508] = 1;
	v->a[69509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69510] = actions(2414);
	v->a[69511] = 1;
	v->a[69512] = anon_sym_DQUOTE;
	v->a[69513] = actions(2416);
	v->a[69514] = 1;
	v->a[69515] = anon_sym_DOLLAR_LBRACE;
	v->a[69516] = actions(2418);
	v->a[69517] = 1;
	v->a[69518] = anon_sym_DOLLAR_LPAREN;
	v->a[69519] = actions(2420);
	small_parse_table_3476(v);
}

void	small_parse_table_3476(t_small_parse_table_array *v)
{
	v->a[69520] = 1;
	v->a[69521] = anon_sym_BQUOTE;
	v->a[69522] = actions(2715);
	v->a[69523] = 1;
	v->a[69524] = anon_sym_DOLLAR;
	v->a[69525] = state(202);
	v->a[69526] = 2;
	v->a[69527] = sym_concatenation;
	v->a[69528] = aux_sym_for_statement_repeat1;
	v->a[69529] = actions(2747);
	v->a[69530] = 3;
	v->a[69531] = sym_raw_string;
	v->a[69532] = sym_number;
	v->a[69533] = sym_word;
	v->a[69534] = state(394);
	v->a[69535] = 5;
	v->a[69536] = sym_arithmetic_expansion;
	v->a[69537] = sym_string;
	v->a[69538] = sym_simple_expansion;
	v->a[69539] = sym_expansion;
	small_parse_table_3477(v);
}

void	small_parse_table_3477(t_small_parse_table_array *v)
{
	v->a[69540] = sym_command_substitution;
	v->a[69541] = 10;
	v->a[69542] = actions(3);
	v->a[69543] = 1;
	v->a[69544] = sym_comment;
	v->a[69545] = actions(1067);
	v->a[69546] = 1;
	v->a[69547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69548] = actions(1069);
	v->a[69549] = 1;
	v->a[69550] = anon_sym_DOLLAR;
	v->a[69551] = actions(1071);
	v->a[69552] = 1;
	v->a[69553] = anon_sym_DQUOTE;
	v->a[69554] = actions(1073);
	v->a[69555] = 1;
	v->a[69556] = anon_sym_DOLLAR_LBRACE;
	v->a[69557] = actions(1075);
	v->a[69558] = 1;
	v->a[69559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3478(v);
}

void	small_parse_table_3478(t_small_parse_table_array *v)
{
	v->a[69560] = actions(1077);
	v->a[69561] = 1;
	v->a[69562] = anon_sym_BQUOTE;
	v->a[69563] = state(1026);
	v->a[69564] = 2;
	v->a[69565] = sym_concatenation;
	v->a[69566] = aux_sym_for_statement_repeat1;
	v->a[69567] = actions(1964);
	v->a[69568] = 3;
	v->a[69569] = sym_raw_string;
	v->a[69570] = sym_number;
	v->a[69571] = sym_word;
	v->a[69572] = state(1412);
	v->a[69573] = 5;
	v->a[69574] = sym_arithmetic_expansion;
	v->a[69575] = sym_string;
	v->a[69576] = sym_simple_expansion;
	v->a[69577] = sym_expansion;
	v->a[69578] = sym_command_substitution;
	v->a[69579] = 10;
	small_parse_table_3479(v);
}

void	small_parse_table_3479(t_small_parse_table_array *v)
{
	v->a[69580] = actions(3);
	v->a[69581] = 1;
	v->a[69582] = sym_comment;
	v->a[69583] = actions(2444);
	v->a[69584] = 1;
	v->a[69585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69586] = actions(2448);
	v->a[69587] = 1;
	v->a[69588] = anon_sym_DQUOTE;
	v->a[69589] = actions(2450);
	v->a[69590] = 1;
	v->a[69591] = anon_sym_DOLLAR_LBRACE;
	v->a[69592] = actions(2452);
	v->a[69593] = 1;
	v->a[69594] = anon_sym_DOLLAR_LPAREN;
	v->a[69595] = actions(2454);
	v->a[69596] = 1;
	v->a[69597] = anon_sym_BQUOTE;
	v->a[69598] = actions(2553);
	v->a[69599] = 1;
	small_parse_table_3480(v);
}

/* EOF small_parse_table_695.c */
