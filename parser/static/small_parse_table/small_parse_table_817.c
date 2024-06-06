/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_817.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4085(t_small_parse_table_array *v)
{
	v->a[81700] = state(3472);
	v->a[81701] = 2;
	v->a[81702] = sym_concatenation;
	v->a[81703] = sym__extglob_blob;
	v->a[81704] = state(3295);
	v->a[81705] = 7;
	v->a[81706] = sym_arithmetic_expansion;
	v->a[81707] = sym_brace_expression;
	v->a[81708] = sym_string;
	v->a[81709] = sym_number;
	v->a[81710] = sym_simple_expansion;
	v->a[81711] = sym_expansion;
	v->a[81712] = sym_command_substitution;
	v->a[81713] = 22;
	v->a[81714] = actions(57);
	v->a[81715] = 1;
	v->a[81716] = sym_comment;
	v->a[81717] = actions(4328);
	v->a[81718] = 1;
	v->a[81719] = sym_word;
	small_parse_table_4086(v);
}

void	small_parse_table_4086(t_small_parse_table_array *v)
{
	v->a[81720] = actions(4340);
	v->a[81721] = 1;
	v->a[81722] = anon_sym_DOLLAR;
	v->a[81723] = actions(4346);
	v->a[81724] = 1;
	v->a[81725] = aux_sym_number_token1;
	v->a[81726] = actions(4348);
	v->a[81727] = 1;
	v->a[81728] = aux_sym_number_token2;
	v->a[81729] = actions(4352);
	v->a[81730] = 1;
	v->a[81731] = anon_sym_DOLLAR_LPAREN;
	v->a[81732] = actions(4360);
	v->a[81733] = 1;
	v->a[81734] = sym_extglob_pattern;
	v->a[81735] = actions(4362);
	v->a[81736] = 1;
	v->a[81737] = sym__brace_start;
	v->a[81738] = actions(4376);
	v->a[81739] = 1;
	small_parse_table_4087(v);
}

void	small_parse_table_4087(t_small_parse_table_array *v)
{
	v->a[81740] = anon_sym_esac;
	v->a[81741] = actions(4548);
	v->a[81742] = 1;
	v->a[81743] = anon_sym_LPAREN;
	v->a[81744] = actions(4550);
	v->a[81745] = 1;
	v->a[81746] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81747] = actions(4552);
	v->a[81748] = 1;
	v->a[81749] = sym__special_character;
	v->a[81750] = actions(4554);
	v->a[81751] = 1;
	v->a[81752] = anon_sym_DQUOTE;
	v->a[81753] = actions(4556);
	v->a[81754] = 1;
	v->a[81755] = anon_sym_DOLLAR_LBRACE;
	v->a[81756] = actions(4558);
	v->a[81757] = 1;
	v->a[81758] = anon_sym_BQUOTE;
	v->a[81759] = actions(4560);
	small_parse_table_4088(v);
}

void	small_parse_table_4088(t_small_parse_table_array *v)
{
	v->a[81760] = 1;
	v->a[81761] = anon_sym_DOLLAR_BQUOTE;
	v->a[81762] = state(3393);
	v->a[81763] = 1;
	v->a[81764] = aux_sym__literal_repeat1;
	v->a[81765] = state(3870);
	v->a[81766] = 1;
	v->a[81767] = sym_last_case_item;
	v->a[81768] = actions(4358);
	v->a[81769] = 2;
	v->a[81770] = sym_test_operator;
	v->a[81771] = sym_raw_string;
	v->a[81772] = state(1740);
	v->a[81773] = 2;
	v->a[81774] = sym_case_item;
	v->a[81775] = aux_sym_case_statement_repeat1;
	v->a[81776] = state(3472);
	v->a[81777] = 2;
	v->a[81778] = sym_concatenation;
	v->a[81779] = sym__extglob_blob;
	small_parse_table_4089(v);
}

void	small_parse_table_4089(t_small_parse_table_array *v)
{
	v->a[81780] = state(3295);
	v->a[81781] = 7;
	v->a[81782] = sym_arithmetic_expansion;
	v->a[81783] = sym_brace_expression;
	v->a[81784] = sym_string;
	v->a[81785] = sym_number;
	v->a[81786] = sym_simple_expansion;
	v->a[81787] = sym_expansion;
	v->a[81788] = sym_command_substitution;
	v->a[81789] = 22;
	v->a[81790] = actions(57);
	v->a[81791] = 1;
	v->a[81792] = sym_comment;
	v->a[81793] = actions(4328);
	v->a[81794] = 1;
	v->a[81795] = sym_word;
	v->a[81796] = actions(4340);
	v->a[81797] = 1;
	v->a[81798] = anon_sym_DOLLAR;
	v->a[81799] = actions(4346);
	small_parse_table_4090(v);
}

/* EOF small_parse_table_817.c */
