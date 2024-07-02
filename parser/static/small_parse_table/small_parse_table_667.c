/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_667.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3335(t_small_parse_table_array *v)
{
	v->a[66700] = sym__bare_dollar;
	v->a[66701] = actions(2535);
	v->a[66702] = 1;
	v->a[66703] = anon_sym_DOLLAR;
	v->a[66704] = actions(2458);
	v->a[66705] = 5;
	v->a[66706] = aux_sym_concatenation_token1;
	v->a[66707] = sym_raw_string;
	v->a[66708] = sym_number;
	v->a[66709] = sym__comment_word;
	v->a[66710] = sym_word;
	v->a[66711] = state(403);
	v->a[66712] = 5;
	v->a[66713] = sym_arithmetic_expansion;
	v->a[66714] = sym_string;
	v->a[66715] = sym_simple_expansion;
	v->a[66716] = sym_expansion;
	v->a[66717] = sym_command_substitution;
	v->a[66718] = 10;
	v->a[66719] = actions(3);
	small_parse_table_3336(v);
}

void	small_parse_table_3336(t_small_parse_table_array *v)
{
	v->a[66720] = 1;
	v->a[66721] = sym_comment;
	v->a[66722] = actions(1641);
	v->a[66723] = 1;
	v->a[66724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66725] = actions(1645);
	v->a[66726] = 1;
	v->a[66727] = anon_sym_DQUOTE;
	v->a[66728] = actions(1647);
	v->a[66729] = 1;
	v->a[66730] = anon_sym_DOLLAR_LBRACE;
	v->a[66731] = actions(1649);
	v->a[66732] = 1;
	v->a[66733] = anon_sym_DOLLAR_LPAREN;
	v->a[66734] = actions(1651);
	v->a[66735] = 1;
	v->a[66736] = anon_sym_BQUOTE;
	v->a[66737] = actions(2539);
	v->a[66738] = 1;
	v->a[66739] = anon_sym_DOLLAR;
	small_parse_table_3337(v);
}

void	small_parse_table_3337(t_small_parse_table_array *v)
{
	v->a[66740] = actions(2541);
	v->a[66741] = 1;
	v->a[66742] = sym__bare_dollar;
	v->a[66743] = actions(2537);
	v->a[66744] = 5;
	v->a[66745] = aux_sym_concatenation_token1;
	v->a[66746] = sym_raw_string;
	v->a[66747] = sym_number;
	v->a[66748] = sym__comment_word;
	v->a[66749] = sym_word;
	v->a[66750] = state(1867);
	v->a[66751] = 5;
	v->a[66752] = sym_arithmetic_expansion;
	v->a[66753] = sym_string;
	v->a[66754] = sym_simple_expansion;
	v->a[66755] = sym_expansion;
	v->a[66756] = sym_command_substitution;
	v->a[66757] = 12;
	v->a[66758] = actions(3);
	v->a[66759] = 1;
	small_parse_table_3338(v);
}

void	small_parse_table_3338(t_small_parse_table_array *v)
{
	v->a[66760] = sym_comment;
	v->a[66761] = actions(1067);
	v->a[66762] = 1;
	v->a[66763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66764] = actions(1069);
	v->a[66765] = 1;
	v->a[66766] = anon_sym_DOLLAR;
	v->a[66767] = actions(1071);
	v->a[66768] = 1;
	v->a[66769] = anon_sym_DQUOTE;
	v->a[66770] = actions(1073);
	v->a[66771] = 1;
	v->a[66772] = anon_sym_DOLLAR_LBRACE;
	v->a[66773] = actions(1075);
	v->a[66774] = 1;
	v->a[66775] = anon_sym_DOLLAR_LPAREN;
	v->a[66776] = actions(1077);
	v->a[66777] = 1;
	v->a[66778] = anon_sym_BQUOTE;
	v->a[66779] = actions(2543);
	small_parse_table_3339(v);
}

void	small_parse_table_3339(t_small_parse_table_array *v)
{
	v->a[66780] = 1;
	v->a[66781] = aux_sym_heredoc_redirect_token1;
	v->a[66782] = state(1331);
	v->a[66783] = 1;
	v->a[66784] = aux_sym__heredoc_command;
	v->a[66785] = state(1725);
	v->a[66786] = 1;
	v->a[66787] = sym_concatenation;
	v->a[66788] = actions(1057);
	v->a[66789] = 3;
	v->a[66790] = sym_raw_string;
	v->a[66791] = sym_number;
	v->a[66792] = sym_word;
	v->a[66793] = state(1589);
	v->a[66794] = 5;
	v->a[66795] = sym_arithmetic_expansion;
	v->a[66796] = sym_string;
	v->a[66797] = sym_simple_expansion;
	v->a[66798] = sym_expansion;
	v->a[66799] = sym_command_substitution;
	small_parse_table_3340(v);
}

/* EOF small_parse_table_667.c */
