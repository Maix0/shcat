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
	v->a[66700] = actions(407);
	v->a[66701] = 1;
	v->a[66702] = sym_comment;
	v->a[66703] = actions(3023);
	v->a[66704] = 1;
	v->a[66705] = sym__heredoc_body_beginning;
	v->a[66706] = actions(3025);
	v->a[66707] = 1;
	v->a[66708] = sym_simple_heredoc_body;
	v->a[66709] = state(1778);
	v->a[66710] = 1;
	v->a[66711] = sym_heredoc_body;
	v->a[66712] = state(1415);
	v->a[66713] = 2;
	v->a[66714] = sym__heredoc_body;
	v->a[66715] = sym__simple_heredoc_body;
	v->a[66716] = 5;
	v->a[66717] = actions(407);
	v->a[66718] = 1;
	v->a[66719] = sym_comment;
	small_parse_table_3336(v);
}

void	small_parse_table_3336(t_small_parse_table_array *v)
{
	v->a[66720] = actions(3023);
	v->a[66721] = 1;
	v->a[66722] = sym__heredoc_body_beginning;
	v->a[66723] = actions(3025);
	v->a[66724] = 1;
	v->a[66725] = sym_simple_heredoc_body;
	v->a[66726] = state(1778);
	v->a[66727] = 1;
	v->a[66728] = sym_heredoc_body;
	v->a[66729] = state(1380);
	v->a[66730] = 2;
	v->a[66731] = sym__heredoc_body;
	v->a[66732] = sym__simple_heredoc_body;
	v->a[66733] = 5;
	v->a[66734] = actions(407);
	v->a[66735] = 1;
	v->a[66736] = sym_comment;
	v->a[66737] = actions(3003);
	v->a[66738] = 1;
	v->a[66739] = aux_sym_concatenation_token1;
	small_parse_table_3337(v);
}

void	small_parse_table_3337(t_small_parse_table_array *v)
{
	v->a[66740] = actions(3034);
	v->a[66741] = 1;
	v->a[66742] = sym__concat;
	v->a[66743] = state(1553);
	v->a[66744] = 1;
	v->a[66745] = aux_sym_concatenation_repeat1;
	v->a[66746] = actions(1001);
	v->a[66747] = 2;
	v->a[66748] = anon_sym_PIPE;
	v->a[66749] = anon_sym_RPAREN;
	v->a[66750] = 2;
	v->a[66751] = actions(407);
	v->a[66752] = 1;
	v->a[66753] = sym_comment;
	v->a[66754] = actions(445);
	v->a[66755] = 5;
	v->a[66756] = sym__concat;
	v->a[66757] = anon_sym_PIPE;
	v->a[66758] = anon_sym_RPAREN;
	v->a[66759] = anon_sym_RBRACE;
	small_parse_table_3338(v);
}

void	small_parse_table_3338(t_small_parse_table_array *v)
{
	v->a[66760] = aux_sym_concatenation_token1;
	v->a[66761] = 6;
	v->a[66762] = actions(407);
	v->a[66763] = 1;
	v->a[66764] = sym_comment;
	v->a[66765] = actions(3023);
	v->a[66766] = 1;
	v->a[66767] = sym__heredoc_body_beginning;
	v->a[66768] = actions(3036);
	v->a[66769] = 1;
	v->a[66770] = sym_simple_heredoc_body;
	v->a[66771] = state(1021);
	v->a[66772] = 1;
	v->a[66773] = sym__heredoc_body;
	v->a[66774] = state(1029);
	v->a[66775] = 1;
	v->a[66776] = sym__simple_heredoc_body;
	v->a[66777] = state(1685);
	v->a[66778] = 1;
	v->a[66779] = sym_heredoc_body;
	small_parse_table_3339(v);
}

void	small_parse_table_3339(t_small_parse_table_array *v)
{
	v->a[66780] = 2;
	v->a[66781] = actions(407);
	v->a[66782] = 1;
	v->a[66783] = sym_comment;
	v->a[66784] = actions(457);
	v->a[66785] = 5;
	v->a[66786] = sym__concat;
	v->a[66787] = anon_sym_PIPE;
	v->a[66788] = anon_sym_RPAREN;
	v->a[66789] = anon_sym_RBRACE;
	v->a[66790] = aux_sym_concatenation_token1;
	v->a[66791] = 5;
	v->a[66792] = actions(407);
	v->a[66793] = 1;
	v->a[66794] = sym_comment;
	v->a[66795] = actions(3023);
	v->a[66796] = 1;
	v->a[66797] = sym__heredoc_body_beginning;
	v->a[66798] = actions(3036);
	v->a[66799] = 1;
	small_parse_table_3340(v);
}

/* EOF small_parse_table_667.c */
