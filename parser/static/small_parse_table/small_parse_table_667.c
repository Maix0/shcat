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
	v->a[66700] = actions(2665);
	v->a[66701] = 1;
	v->a[66702] = anon_sym_DOLLAR;
	v->a[66703] = actions(2486);
	v->a[66704] = 5;
	v->a[66705] = aux_sym_concatenation_token1;
	v->a[66706] = sym_raw_string;
	v->a[66707] = sym_number;
	v->a[66708] = sym__comment_word;
	v->a[66709] = sym_word;
	v->a[66710] = state(611);
	v->a[66711] = 5;
	v->a[66712] = sym_arithmetic_expansion;
	v->a[66713] = sym_string;
	v->a[66714] = sym_simple_expansion;
	v->a[66715] = sym_expansion;
	v->a[66716] = sym_command_substitution;
	v->a[66717] = 12;
	v->a[66718] = actions(3);
	v->a[66719] = 1;
	small_parse_table_3336(v);
}

void	small_parse_table_3336(t_small_parse_table_array *v)
{
	v->a[66720] = sym_comment;
	v->a[66721] = actions(2611);
	v->a[66722] = 1;
	v->a[66723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66724] = actions(2613);
	v->a[66725] = 1;
	v->a[66726] = anon_sym_DOLLAR;
	v->a[66727] = actions(2615);
	v->a[66728] = 1;
	v->a[66729] = anon_sym_DQUOTE;
	v->a[66730] = actions(2617);
	v->a[66731] = 1;
	v->a[66732] = anon_sym_DOLLAR_LBRACE;
	v->a[66733] = actions(2619);
	v->a[66734] = 1;
	v->a[66735] = anon_sym_DOLLAR_LPAREN;
	v->a[66736] = actions(2621);
	v->a[66737] = 1;
	v->a[66738] = anon_sym_BQUOTE;
	v->a[66739] = actions(2669);
	small_parse_table_3337(v);
}

void	small_parse_table_3337(t_small_parse_table_array *v)
{
	v->a[66740] = 1;
	v->a[66741] = sym__comment_word;
	v->a[66742] = actions(2671);
	v->a[66743] = 1;
	v->a[66744] = sym__empty_value;
	v->a[66745] = state(704);
	v->a[66746] = 1;
	v->a[66747] = sym_concatenation;
	v->a[66748] = actions(2667);
	v->a[66749] = 3;
	v->a[66750] = sym_raw_string;
	v->a[66751] = sym_number;
	v->a[66752] = sym_word;
	v->a[66753] = state(386);
	v->a[66754] = 5;
	v->a[66755] = sym_arithmetic_expansion;
	v->a[66756] = sym_string;
	v->a[66757] = sym_simple_expansion;
	v->a[66758] = sym_expansion;
	v->a[66759] = sym_command_substitution;
	small_parse_table_3338(v);
}

void	small_parse_table_3338(t_small_parse_table_array *v)
{
	v->a[66760] = 3;
	v->a[66761] = actions(3);
	v->a[66762] = 1;
	v->a[66763] = sym_comment;
	v->a[66764] = actions(2213);
	v->a[66765] = 2;
	v->a[66766] = sym_file_descriptor;
	v->a[66767] = aux_sym_heredoc_redirect_token1;
	v->a[66768] = actions(2215);
	v->a[66769] = 15;
	v->a[66770] = anon_sym_esac;
	v->a[66771] = anon_sym_PIPE;
	v->a[66772] = anon_sym_SEMI_SEMI;
	v->a[66773] = anon_sym_AMP_AMP;
	v->a[66774] = anon_sym_PIPE_PIPE;
	v->a[66775] = anon_sym_LT;
	v->a[66776] = anon_sym_GT;
	v->a[66777] = anon_sym_GT_GT;
	v->a[66778] = anon_sym_LT_AMP;
	v->a[66779] = anon_sym_GT_AMP;
	small_parse_table_3339(v);
}

void	small_parse_table_3339(t_small_parse_table_array *v)
{
	v->a[66780] = anon_sym_GT_PIPE;
	v->a[66781] = anon_sym_LT_GT;
	v->a[66782] = anon_sym_LT_LT;
	v->a[66783] = anon_sym_LT_LT_DASH;
	v->a[66784] = anon_sym_SEMI;
	v->a[66785] = 3;
	v->a[66786] = actions(3);
	v->a[66787] = 1;
	v->a[66788] = sym_comment;
	v->a[66789] = actions(2065);
	v->a[66790] = 2;
	v->a[66791] = sym_file_descriptor;
	v->a[66792] = aux_sym_heredoc_redirect_token1;
	v->a[66793] = actions(2067);
	v->a[66794] = 15;
	v->a[66795] = anon_sym_esac;
	v->a[66796] = anon_sym_PIPE;
	v->a[66797] = anon_sym_SEMI_SEMI;
	v->a[66798] = anon_sym_AMP_AMP;
	v->a[66799] = anon_sym_PIPE_PIPE;
	small_parse_table_3340(v);
}

/* EOF small_parse_table_667.c */
