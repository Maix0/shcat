/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3117.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15585(t_small_parse_table_array *v)
{
	v->a[311700] = 1;
	v->a[311701] = sym_comment;
	v->a[311702] = actions(8526);
	v->a[311703] = 1;
	v->a[311704] = anon_sym_DOLLAR_LBRACE;
	v->a[311705] = actions(8530);
	v->a[311706] = 1;
	v->a[311707] = anon_sym_BQUOTE;
	v->a[311708] = actions(8532);
	v->a[311709] = 1;
	v->a[311710] = anon_sym_DOLLAR_BQUOTE;
	v->a[311711] = actions(14586);
	v->a[311712] = 1;
	v->a[311713] = anon_sym_DOLLAR_LPAREN;
	v->a[311714] = state(2510);
	v->a[311715] = 2;
	v->a[311716] = sym_expansion;
	v->a[311717] = sym_command_substitution;
	v->a[311718] = 6;
	v->a[311719] = actions(71);
	small_parse_table_15586(v);
}

void	small_parse_table_15586(t_small_parse_table_array *v)
{
	v->a[311720] = 1;
	v->a[311721] = sym_comment;
	v->a[311722] = actions(14588);
	v->a[311723] = 1;
	v->a[311724] = anon_sym_SLASH;
	v->a[311725] = actions(14592);
	v->a[311726] = 1;
	v->a[311727] = anon_sym_RBRACE3;
	v->a[311728] = actions(14594);
	v->a[311729] = 1;
	v->a[311730] = sym__expansion_word;
	v->a[311731] = state(6475);
	v->a[311732] = 1;
	v->a[311733] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[311734] = actions(14590);
	v->a[311735] = 2;
	v->a[311736] = sym__concat;
	v->a[311737] = aux_sym_concatenation_token1;
	v->a[311738] = 6;
	v->a[311739] = actions(71);
	small_parse_table_15587(v);
}

void	small_parse_table_15587(t_small_parse_table_array *v)
{
	v->a[311740] = 1;
	v->a[311741] = sym_comment;
	v->a[311742] = actions(8952);
	v->a[311743] = 1;
	v->a[311744] = anon_sym_DOLLAR_LBRACE;
	v->a[311745] = actions(8954);
	v->a[311746] = 1;
	v->a[311747] = anon_sym_BQUOTE;
	v->a[311748] = actions(8956);
	v->a[311749] = 1;
	v->a[311750] = anon_sym_DOLLAR_BQUOTE;
	v->a[311751] = actions(14596);
	v->a[311752] = 1;
	v->a[311753] = anon_sym_DOLLAR_LPAREN;
	v->a[311754] = state(3175);
	v->a[311755] = 2;
	v->a[311756] = sym_expansion;
	v->a[311757] = sym_command_substitution;
	v->a[311758] = 6;
	v->a[311759] = actions(71);
	small_parse_table_15588(v);
}

void	small_parse_table_15588(t_small_parse_table_array *v)
{
	v->a[311760] = 1;
	v->a[311761] = sym_comment;
	v->a[311762] = actions(9132);
	v->a[311763] = 1;
	v->a[311764] = anon_sym_DOLLAR_LBRACE;
	v->a[311765] = actions(9136);
	v->a[311766] = 1;
	v->a[311767] = anon_sym_BQUOTE;
	v->a[311768] = actions(9138);
	v->a[311769] = 1;
	v->a[311770] = anon_sym_DOLLAR_BQUOTE;
	v->a[311771] = actions(14598);
	v->a[311772] = 1;
	v->a[311773] = anon_sym_DOLLAR_LPAREN;
	v->a[311774] = state(2399);
	v->a[311775] = 2;
	v->a[311776] = sym_expansion;
	v->a[311777] = sym_command_substitution;
	v->a[311778] = 3;
	v->a[311779] = actions(3);
	small_parse_table_15589(v);
}

void	small_parse_table_15589(t_small_parse_table_array *v)
{
	v->a[311780] = 1;
	v->a[311781] = sym_comment;
	v->a[311782] = actions(1322);
	v->a[311783] = 2;
	v->a[311784] = sym_regex;
	v->a[311785] = aux_sym__expansion_regex_token1;
	v->a[311786] = actions(1320);
	v->a[311787] = 4;
	v->a[311788] = anon_sym_RPAREN;
	v->a[311789] = anon_sym_DQUOTE;
	v->a[311790] = sym_raw_string;
	v->a[311791] = anon_sym_RBRACE3;
	v->a[311792] = 6;
	v->a[311793] = actions(71);
	v->a[311794] = 1;
	v->a[311795] = sym_comment;
	v->a[311796] = actions(14564);
	v->a[311797] = 1;
	v->a[311798] = anon_sym_PIPE;
	v->a[311799] = actions(14600);
	small_parse_table_15590(v);
}

/* EOF small_parse_table_3117.c */
