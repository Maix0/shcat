/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_517.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2585(t_small_parse_table_array *v)
{
	v->a[51700] = anon_sym_DOLLAR;
	v->a[51701] = anon_sym_DQUOTE;
	v->a[51702] = sym_raw_string;
	v->a[51703] = sym_number;
	v->a[51704] = anon_sym_DOLLAR_LBRACE;
	v->a[51705] = anon_sym_DOLLAR_LPAREN;
	v->a[51706] = anon_sym_BQUOTE;
	v->a[51707] = sym_word;
	v->a[51708] = anon_sym_SEMI;
	v->a[51709] = 17;
	v->a[51710] = actions(3);
	v->a[51711] = 1;
	v->a[51712] = sym_comment;
	v->a[51713] = actions(109);
	v->a[51714] = 1;
	v->a[51715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51716] = actions(111);
	v->a[51717] = 1;
	v->a[51718] = anon_sym_DOLLAR;
	v->a[51719] = actions(113);
	small_parse_table_2586(v);
}

void	small_parse_table_2586(t_small_parse_table_array *v)
{
	v->a[51720] = 1;
	v->a[51721] = anon_sym_DQUOTE;
	v->a[51722] = actions(117);
	v->a[51723] = 1;
	v->a[51724] = anon_sym_DOLLAR_LBRACE;
	v->a[51725] = actions(119);
	v->a[51726] = 1;
	v->a[51727] = anon_sym_DOLLAR_LPAREN;
	v->a[51728] = actions(121);
	v->a[51729] = 1;
	v->a[51730] = anon_sym_BQUOTE;
	v->a[51731] = actions(377);
	v->a[51732] = 1;
	v->a[51733] = sym_variable_name;
	v->a[51734] = actions(1201);
	v->a[51735] = 1;
	v->a[51736] = sym_file_descriptor;
	v->a[51737] = state(179);
	v->a[51738] = 1;
	v->a[51739] = sym_command_name;
	small_parse_table_2587(v);
}

void	small_parse_table_2587(t_small_parse_table_array *v)
{
	v->a[51740] = state(621);
	v->a[51741] = 1;
	v->a[51742] = sym_concatenation;
	v->a[51743] = state(1477);
	v->a[51744] = 1;
	v->a[51745] = sym_file_redirect;
	v->a[51746] = actions(1199);
	v->a[51747] = 2;
	v->a[51748] = anon_sym_LT_AMP_DASH;
	v->a[51749] = anon_sym_GT_AMP_DASH;
	v->a[51750] = state(1241);
	v->a[51751] = 2;
	v->a[51752] = sym_variable_assignment;
	v->a[51753] = aux_sym_command_repeat1;
	v->a[51754] = actions(115);
	v->a[51755] = 3;
	v->a[51756] = sym_raw_string;
	v->a[51757] = sym_number;
	v->a[51758] = sym_word;
	v->a[51759] = state(282);
	small_parse_table_2588(v);
}

void	small_parse_table_2588(t_small_parse_table_array *v)
{
	v->a[51760] = 5;
	v->a[51761] = sym_arithmetic_expansion;
	v->a[51762] = sym_string;
	v->a[51763] = sym_simple_expansion;
	v->a[51764] = sym_expansion;
	v->a[51765] = sym_command_substitution;
	v->a[51766] = actions(1197);
	v->a[51767] = 8;
	v->a[51768] = anon_sym_LT;
	v->a[51769] = anon_sym_GT;
	v->a[51770] = anon_sym_GT_GT;
	v->a[51771] = anon_sym_AMP_GT;
	v->a[51772] = anon_sym_AMP_GT_GT;
	v->a[51773] = anon_sym_LT_AMP;
	v->a[51774] = anon_sym_GT_AMP;
	v->a[51775] = anon_sym_GT_PIPE;
	v->a[51776] = 4;
	v->a[51777] = actions(3);
	v->a[51778] = 1;
	v->a[51779] = sym_comment;
	small_parse_table_2589(v);
}

void	small_parse_table_2589(t_small_parse_table_array *v)
{
	v->a[51780] = actions(1554);
	v->a[51781] = 2;
	v->a[51782] = anon_sym_RPAREN;
	v->a[51783] = anon_sym_SEMI_SEMI;
	v->a[51784] = actions(1556);
	v->a[51785] = 2;
	v->a[51786] = sym_file_descriptor;
	v->a[51787] = sym_variable_name;
	v->a[51788] = actions(1552);
	v->a[51789] = 27;
	v->a[51790] = anon_sym_for;
	v->a[51791] = anon_sym_while;
	v->a[51792] = anon_sym_until;
	v->a[51793] = anon_sym_if;
	v->a[51794] = anon_sym_case;
	v->a[51795] = anon_sym_LPAREN;
	v->a[51796] = anon_sym_LBRACE;
	v->a[51797] = anon_sym_BANG;
	v->a[51798] = anon_sym_LT;
	v->a[51799] = anon_sym_GT;
	small_parse_table_2590(v);
}

/* EOF small_parse_table_517.c */
