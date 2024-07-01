/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_687.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3435(t_small_parse_table_array *v)
{
	v->a[68700] = actions(904);
	v->a[68701] = 1;
	v->a[68702] = anon_sym_BQUOTE;
	v->a[68703] = state(2102);
	v->a[68704] = 1;
	v->a[68705] = sym_terminator;
	v->a[68706] = state(1327);
	v->a[68707] = 2;
	v->a[68708] = sym_concatenation;
	v->a[68709] = aux_sym_for_statement_repeat1;
	v->a[68710] = actions(2260);
	v->a[68711] = 3;
	v->a[68712] = sym_raw_string;
	v->a[68713] = sym_number;
	v->a[68714] = sym_word;
	v->a[68715] = actions(2262);
	v->a[68716] = 4;
	v->a[68717] = anon_sym_SEMI_SEMI;
	v->a[68718] = aux_sym_heredoc_redirect_token1;
	v->a[68719] = anon_sym_AMP;
	small_parse_table_3436(v);
}

void	small_parse_table_3436(t_small_parse_table_array *v)
{
	v->a[68720] = anon_sym_SEMI;
	v->a[68721] = state(1543);
	v->a[68722] = 5;
	v->a[68723] = sym_arithmetic_expansion;
	v->a[68724] = sym_string;
	v->a[68725] = sym_simple_expansion;
	v->a[68726] = sym_expansion;
	v->a[68727] = sym_command_substitution;
	v->a[68728] = 15;
	v->a[68729] = actions(3);
	v->a[68730] = 1;
	v->a[68731] = sym_comment;
	v->a[68732] = actions(1774);
	v->a[68733] = 1;
	v->a[68734] = anon_sym_LPAREN;
	v->a[68735] = actions(1778);
	v->a[68736] = 1;
	v->a[68737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68738] = actions(1780);
	v->a[68739] = 1;
	small_parse_table_3437(v);
}

void	small_parse_table_3437(t_small_parse_table_array *v)
{
	v->a[68740] = anon_sym_DOLLAR;
	v->a[68741] = actions(1782);
	v->a[68742] = 1;
	v->a[68743] = anon_sym_DQUOTE;
	v->a[68744] = actions(1784);
	v->a[68745] = 1;
	v->a[68746] = anon_sym_DOLLAR_LBRACE;
	v->a[68747] = actions(1786);
	v->a[68748] = 1;
	v->a[68749] = anon_sym_DOLLAR_LPAREN;
	v->a[68750] = actions(1788);
	v->a[68751] = 1;
	v->a[68752] = anon_sym_BQUOTE;
	v->a[68753] = actions(1790);
	v->a[68754] = 1;
	v->a[68755] = sym_extglob_pattern;
	v->a[68756] = state(1329);
	v->a[68757] = 1;
	v->a[68758] = aux_sym_case_statement_repeat1;
	v->a[68759] = state(1920);
	small_parse_table_3438(v);
}

void	small_parse_table_3438(t_small_parse_table_array *v)
{
	v->a[68760] = 1;
	v->a[68761] = sym_case_item;
	v->a[68762] = state(2225);
	v->a[68763] = 1;
	v->a[68764] = sym__case_item_last;
	v->a[68765] = state(2096);
	v->a[68766] = 2;
	v->a[68767] = sym_concatenation;
	v->a[68768] = sym__extglob_blob;
	v->a[68769] = actions(1770);
	v->a[68770] = 3;
	v->a[68771] = sym_raw_string;
	v->a[68772] = sym_number;
	v->a[68773] = sym_word;
	v->a[68774] = state(2001);
	v->a[68775] = 5;
	v->a[68776] = sym_arithmetic_expansion;
	v->a[68777] = sym_string;
	v->a[68778] = sym_simple_expansion;
	v->a[68779] = sym_expansion;
	small_parse_table_3439(v);
}

void	small_parse_table_3439(t_small_parse_table_array *v)
{
	v->a[68780] = sym_command_substitution;
	v->a[68781] = 3;
	v->a[68782] = actions(3);
	v->a[68783] = 1;
	v->a[68784] = sym_comment;
	v->a[68785] = actions(2276);
	v->a[68786] = 3;
	v->a[68787] = sym_file_descriptor;
	v->a[68788] = ts_builtin_sym_end;
	v->a[68789] = aux_sym_heredoc_redirect_token1;
	v->a[68790] = actions(2278);
	v->a[68791] = 18;
	v->a[68792] = anon_sym_PIPE;
	v->a[68793] = anon_sym_RPAREN;
	v->a[68794] = anon_sym_SEMI_SEMI;
	v->a[68795] = anon_sym_AMP_AMP;
	v->a[68796] = anon_sym_PIPE_PIPE;
	v->a[68797] = anon_sym_LT;
	v->a[68798] = anon_sym_GT;
	v->a[68799] = anon_sym_GT_GT;
	small_parse_table_3440(v);
}

/* EOF small_parse_table_687.c */
