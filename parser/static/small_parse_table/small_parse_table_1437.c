/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1437.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7185(t_small_parse_table_array *v)
{
	v->a[143700] = actions(21);
	v->a[143701] = 1;
	v->a[143702] = anon_sym_LBRACE;
	v->a[143703] = actions(57);
	v->a[143704] = 1;
	v->a[143705] = sym_comment;
	v->a[143706] = actions(8521);
	v->a[143707] = 1;
	v->a[143708] = anon_sym_if;
	v->a[143709] = state(2676);
	v->a[143710] = 3;
	v->a[143711] = sym_if_statement;
	v->a[143712] = sym_compound_statement;
	v->a[143713] = sym_subshell;
	v->a[143714] = 4;
	v->a[143715] = actions(57);
	v->a[143716] = 1;
	v->a[143717] = sym_comment;
	v->a[143718] = state(3383);
	v->a[143719] = 1;
	small_parse_table_7186(v);
}

void	small_parse_table_7186(t_small_parse_table_array *v)
{
	v->a[143720] = aux_sym_concatenation_repeat1;
	v->a[143721] = actions(8549);
	v->a[143722] = 2;
	v->a[143723] = sym__concat;
	v->a[143724] = aux_sym_concatenation_token1;
	v->a[143725] = actions(2664);
	v->a[143726] = 3;
	v->a[143727] = anon_sym_PIPE;
	v->a[143728] = anon_sym_RPAREN;
	v->a[143729] = sym__special_character;
	v->a[143730] = 5;
	v->a[143731] = actions(17);
	v->a[143732] = 1;
	v->a[143733] = anon_sym_LPAREN;
	v->a[143734] = actions(21);
	v->a[143735] = 1;
	v->a[143736] = anon_sym_LBRACE;
	v->a[143737] = actions(57);
	v->a[143738] = 1;
	v->a[143739] = sym_comment;
	small_parse_table_7187(v);
}

void	small_parse_table_7187(t_small_parse_table_array *v)
{
	v->a[143740] = actions(8521);
	v->a[143741] = 1;
	v->a[143742] = anon_sym_if;
	v->a[143743] = state(2546);
	v->a[143744] = 3;
	v->a[143745] = sym_if_statement;
	v->a[143746] = sym_compound_statement;
	v->a[143747] = sym_subshell;
	v->a[143748] = 5;
	v->a[143749] = actions(21);
	v->a[143750] = 1;
	v->a[143751] = anon_sym_LBRACE;
	v->a[143752] = actions(57);
	v->a[143753] = 1;
	v->a[143754] = sym_comment;
	v->a[143755] = actions(8521);
	v->a[143756] = 1;
	v->a[143757] = anon_sym_if;
	v->a[143758] = actions(8619);
	v->a[143759] = 1;
	small_parse_table_7188(v);
}

void	small_parse_table_7188(t_small_parse_table_array *v)
{
	v->a[143760] = anon_sym_LPAREN;
	v->a[143761] = state(2527);
	v->a[143762] = 3;
	v->a[143763] = sym_if_statement;
	v->a[143764] = sym_compound_statement;
	v->a[143765] = sym_subshell;
	v->a[143766] = 6;
	v->a[143767] = actions(57);
	v->a[143768] = 1;
	v->a[143769] = sym_comment;
	v->a[143770] = actions(8495);
	v->a[143771] = 1;
	v->a[143772] = anon_sym_elif;
	v->a[143773] = actions(8497);
	v->a[143774] = 1;
	v->a[143775] = anon_sym_else;
	v->a[143776] = actions(8621);
	v->a[143777] = 1;
	v->a[143778] = anon_sym_fi;
	v->a[143779] = state(3948);
	small_parse_table_7189(v);
}

void	small_parse_table_7189(t_small_parse_table_array *v)
{
	v->a[143780] = 1;
	v->a[143781] = sym_else_clause;
	v->a[143782] = state(3412);
	v->a[143783] = 2;
	v->a[143784] = sym_elif_clause;
	v->a[143785] = aux_sym_if_statement_repeat1;
	v->a[143786] = 5;
	v->a[143787] = actions(17);
	v->a[143788] = 1;
	v->a[143789] = anon_sym_LPAREN;
	v->a[143790] = actions(21);
	v->a[143791] = 1;
	v->a[143792] = anon_sym_LBRACE;
	v->a[143793] = actions(57);
	v->a[143794] = 1;
	v->a[143795] = sym_comment;
	v->a[143796] = actions(8521);
	v->a[143797] = 1;
	v->a[143798] = anon_sym_if;
	v->a[143799] = state(2674);
	small_parse_table_7190(v);
}

/* EOF small_parse_table_1437.c */
