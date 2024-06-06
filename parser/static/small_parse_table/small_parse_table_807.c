/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_807.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4035(t_small_parse_table_array *v)
{
	v->a[80700] = state(3472);
	v->a[80701] = 2;
	v->a[80702] = sym_concatenation;
	v->a[80703] = sym__extglob_blob;
	v->a[80704] = state(3295);
	v->a[80705] = 7;
	v->a[80706] = sym_arithmetic_expansion;
	v->a[80707] = sym_brace_expression;
	v->a[80708] = sym_string;
	v->a[80709] = sym_number;
	v->a[80710] = sym_simple_expansion;
	v->a[80711] = sym_expansion;
	v->a[80712] = sym_command_substitution;
	v->a[80713] = 22;
	v->a[80714] = actions(57);
	v->a[80715] = 1;
	v->a[80716] = sym_comment;
	v->a[80717] = actions(4328);
	v->a[80718] = 1;
	v->a[80719] = sym_word;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = actions(4340);
	v->a[80721] = 1;
	v->a[80722] = anon_sym_DOLLAR;
	v->a[80723] = actions(4346);
	v->a[80724] = 1;
	v->a[80725] = aux_sym_number_token1;
	v->a[80726] = actions(4348);
	v->a[80727] = 1;
	v->a[80728] = aux_sym_number_token2;
	v->a[80729] = actions(4352);
	v->a[80730] = 1;
	v->a[80731] = anon_sym_DOLLAR_LPAREN;
	v->a[80732] = actions(4360);
	v->a[80733] = 1;
	v->a[80734] = sym_extglob_pattern;
	v->a[80735] = actions(4362);
	v->a[80736] = 1;
	v->a[80737] = sym__brace_start;
	v->a[80738] = actions(4548);
	v->a[80739] = 1;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = anon_sym_LPAREN;
	v->a[80741] = actions(4550);
	v->a[80742] = 1;
	v->a[80743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80744] = actions(4552);
	v->a[80745] = 1;
	v->a[80746] = sym__special_character;
	v->a[80747] = actions(4554);
	v->a[80748] = 1;
	v->a[80749] = anon_sym_DQUOTE;
	v->a[80750] = actions(4556);
	v->a[80751] = 1;
	v->a[80752] = anon_sym_DOLLAR_LBRACE;
	v->a[80753] = actions(4558);
	v->a[80754] = 1;
	v->a[80755] = anon_sym_BQUOTE;
	v->a[80756] = actions(4560);
	v->a[80757] = 1;
	v->a[80758] = anon_sym_DOLLAR_BQUOTE;
	v->a[80759] = actions(4564);
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = 1;
	v->a[80761] = anon_sym_esac;
	v->a[80762] = state(3393);
	v->a[80763] = 1;
	v->a[80764] = aux_sym__literal_repeat1;
	v->a[80765] = state(3855);
	v->a[80766] = 1;
	v->a[80767] = sym_last_case_item;
	v->a[80768] = actions(4358);
	v->a[80769] = 2;
	v->a[80770] = sym_test_operator;
	v->a[80771] = sym_raw_string;
	v->a[80772] = state(1736);
	v->a[80773] = 2;
	v->a[80774] = sym_case_item;
	v->a[80775] = aux_sym_case_statement_repeat1;
	v->a[80776] = state(3472);
	v->a[80777] = 2;
	v->a[80778] = sym_concatenation;
	v->a[80779] = sym__extglob_blob;
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = state(3295);
	v->a[80781] = 7;
	v->a[80782] = sym_arithmetic_expansion;
	v->a[80783] = sym_brace_expression;
	v->a[80784] = sym_string;
	v->a[80785] = sym_number;
	v->a[80786] = sym_simple_expansion;
	v->a[80787] = sym_expansion;
	v->a[80788] = sym_command_substitution;
	v->a[80789] = 22;
	v->a[80790] = actions(57);
	v->a[80791] = 1;
	v->a[80792] = sym_comment;
	v->a[80793] = actions(4328);
	v->a[80794] = 1;
	v->a[80795] = sym_word;
	v->a[80796] = actions(4340);
	v->a[80797] = 1;
	v->a[80798] = anon_sym_DOLLAR;
	v->a[80799] = actions(4346);
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
