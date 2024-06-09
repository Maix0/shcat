/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_207.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1035(t_small_parse_table_array *v)
{
	v->a[20700] = actions(77);
	v->a[20701] = 1;
	v->a[20702] = anon_sym_DOLLAR_LPAREN;
	v->a[20703] = actions(79);
	v->a[20704] = 1;
	v->a[20705] = anon_sym_BQUOTE;
	v->a[20706] = actions(81);
	v->a[20707] = 1;
	v->a[20708] = sym_file_descriptor;
	v->a[20709] = actions(405);
	v->a[20710] = 1;
	v->a[20711] = sym_variable_name;
	v->a[20712] = state(190);
	v->a[20713] = 1;
	v->a[20714] = sym_command_name;
	v->a[20715] = state(582);
	v->a[20716] = 1;
	v->a[20717] = sym_concatenation;
	v->a[20718] = state(587);
	v->a[20719] = 1;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = aux_sym_command_repeat1;
	v->a[20721] = state(718);
	v->a[20722] = 1;
	v->a[20723] = sym_file_redirect;
	v->a[20724] = state(1034);
	v->a[20725] = 1;
	v->a[20726] = sym_variable_assignment;
	v->a[20727] = state(1223);
	v->a[20728] = 1;
	v->a[20729] = aux_sym_redirected_statement_repeat2;
	v->a[20730] = actions(11);
	v->a[20731] = 2;
	v->a[20732] = anon_sym_while;
	v->a[20733] = anon_sym_until;
	v->a[20734] = actions(61);
	v->a[20735] = 2;
	v->a[20736] = anon_sym_LT_AMP_DASH;
	v->a[20737] = anon_sym_GT_AMP_DASH;
	v->a[20738] = actions(69);
	v->a[20739] = 2;
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = sym_raw_string;
	v->a[20741] = sym_word;
	v->a[20742] = state(397);
	v->a[20743] = 6;
	v->a[20744] = sym_arithmetic_expansion;
	v->a[20745] = sym_string;
	v->a[20746] = sym_number;
	v->a[20747] = sym_simple_expansion;
	v->a[20748] = sym_expansion;
	v->a[20749] = sym_command_substitution;
	v->a[20750] = state(1141);
	v->a[20751] = 7;
	v->a[20752] = sym_for_statement;
	v->a[20753] = sym_while_statement;
	v->a[20754] = sym_if_statement;
	v->a[20755] = sym_compound_statement;
	v->a[20756] = sym_subshell;
	v->a[20757] = sym_command;
	v->a[20758] = sym_variable_assignments;
	v->a[20759] = actions(59);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 8;
	v->a[20761] = anon_sym_LT;
	v->a[20762] = anon_sym_GT;
	v->a[20763] = anon_sym_GT_GT;
	v->a[20764] = anon_sym_AMP_GT;
	v->a[20765] = anon_sym_AMP_GT_GT;
	v->a[20766] = anon_sym_LT_AMP;
	v->a[20767] = anon_sym_GT_AMP;
	v->a[20768] = anon_sym_GT_PIPE;
	v->a[20769] = 6;
	v->a[20770] = actions(3);
	v->a[20771] = 1;
	v->a[20772] = sym_comment;
	v->a[20773] = actions(415);
	v->a[20774] = 1;
	v->a[20775] = sym_variable_name;
	v->a[20776] = actions(411);
	v->a[20777] = 2;
	v->a[20778] = aux_sym__simple_variable_name_token1;
	v->a[20779] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = actions(413);
	v->a[20781] = 2;
	v->a[20782] = sym_file_descriptor;
	v->a[20783] = sym__bare_dollar;
	v->a[20784] = actions(409);
	v->a[20785] = 9;
	v->a[20786] = anon_sym_BANG;
	v->a[20787] = anon_sym_DASH;
	v->a[20788] = anon_sym_STAR;
	v->a[20789] = anon_sym_QMARK;
	v->a[20790] = anon_sym_DOLLAR;
	v->a[20791] = anon_sym_POUND;
	v->a[20792] = anon_sym_AT;
	v->a[20793] = anon_sym_0;
	v->a[20794] = anon_sym__;
	v->a[20795] = actions(407);
	v->a[20796] = 30;
	v->a[20797] = anon_sym_esac;
	v->a[20798] = anon_sym_LPAREN;
	v->a[20799] = anon_sym_PIPE;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
