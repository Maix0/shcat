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
	v->a[66700] = anon_sym_BQUOTE;
	v->a[66701] = anon_sym_SEMI;
	v->a[66702] = 5;
	v->a[66703] = actions(3);
	v->a[66704] = 1;
	v->a[66705] = sym_comment;
	v->a[66706] = actions(690);
	v->a[66707] = 1;
	v->a[66708] = sym_file_descriptor;
	v->a[66709] = actions(785);
	v->a[66710] = 1;
	v->a[66711] = sym_variable_name;
	v->a[66712] = state(1155);
	v->a[66713] = 2;
	v->a[66714] = sym_variable_assignment;
	v->a[66715] = aux_sym__variable_assignments_repeat1;
	v->a[66716] = actions(678);
	v->a[66717] = 17;
	v->a[66718] = anon_sym_LT;
	v->a[66719] = anon_sym_GT;
	small_parse_table_3336(v);
}

void	small_parse_table_3336(t_small_parse_table_array *v)
{
	v->a[66720] = anon_sym_GT_GT;
	v->a[66721] = anon_sym_LT_AMP;
	v->a[66722] = anon_sym_GT_AMP;
	v->a[66723] = anon_sym_GT_PIPE;
	v->a[66724] = anon_sym_LT_AMP_DASH;
	v->a[66725] = anon_sym_GT_AMP_DASH;
	v->a[66726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66727] = anon_sym_DOLLAR;
	v->a[66728] = anon_sym_DQUOTE;
	v->a[66729] = sym_raw_string;
	v->a[66730] = sym_number;
	v->a[66731] = anon_sym_DOLLAR_LBRACE;
	v->a[66732] = anon_sym_DOLLAR_LPAREN;
	v->a[66733] = anon_sym_BQUOTE;
	v->a[66734] = sym_word;
	v->a[66735] = 7;
	v->a[66736] = actions(3);
	v->a[66737] = 1;
	v->a[66738] = sym_comment;
	v->a[66739] = actions(2220);
	small_parse_table_3337(v);
}

void	small_parse_table_3337(t_small_parse_table_array *v)
{
	v->a[66740] = 1;
	v->a[66741] = sym_file_descriptor;
	v->a[66742] = actions(2027);
	v->a[66743] = 2;
	v->a[66744] = anon_sym_LT_AMP_DASH;
	v->a[66745] = anon_sym_GT_AMP_DASH;
	v->a[66746] = actions(2216);
	v->a[66747] = 2;
	v->a[66748] = ts_builtin_sym_end;
	v->a[66749] = aux_sym_heredoc_redirect_token1;
	v->a[66750] = state(1277);
	v->a[66751] = 2;
	v->a[66752] = sym_file_redirect;
	v->a[66753] = aux_sym_redirected_statement_repeat2;
	v->a[66754] = actions(2025);
	v->a[66755] = 6;
	v->a[66756] = anon_sym_LT;
	v->a[66757] = anon_sym_GT;
	v->a[66758] = anon_sym_GT_GT;
	v->a[66759] = anon_sym_LT_AMP;
	small_parse_table_3338(v);
}

void	small_parse_table_3338(t_small_parse_table_array *v)
{
	v->a[66760] = anon_sym_GT_AMP;
	v->a[66761] = anon_sym_GT_PIPE;
	v->a[66762] = actions(2218);
	v->a[66763] = 8;
	v->a[66764] = anon_sym_PIPE;
	v->a[66765] = anon_sym_SEMI_SEMI;
	v->a[66766] = anon_sym_AMP_AMP;
	v->a[66767] = anon_sym_PIPE_PIPE;
	v->a[66768] = anon_sym_LT_LT;
	v->a[66769] = anon_sym_LT_LT_DASH;
	v->a[66770] = anon_sym_AMP;
	v->a[66771] = anon_sym_SEMI;
	v->a[66772] = 3;
	v->a[66773] = actions(3);
	v->a[66774] = 1;
	v->a[66775] = sym_comment;
	v->a[66776] = actions(970);
	v->a[66777] = 3;
	v->a[66778] = sym_file_descriptor;
	v->a[66779] = sym__concat;
	small_parse_table_3339(v);
}

void	small_parse_table_3339(t_small_parse_table_array *v)
{
	v->a[66780] = aux_sym_heredoc_redirect_token1;
	v->a[66781] = actions(968);
	v->a[66782] = 18;
	v->a[66783] = anon_sym_esac;
	v->a[66784] = anon_sym_PIPE;
	v->a[66785] = anon_sym_SEMI_SEMI;
	v->a[66786] = anon_sym_AMP_AMP;
	v->a[66787] = anon_sym_PIPE_PIPE;
	v->a[66788] = anon_sym_LT;
	v->a[66789] = anon_sym_GT;
	v->a[66790] = anon_sym_GT_GT;
	v->a[66791] = anon_sym_LT_AMP;
	v->a[66792] = anon_sym_GT_AMP;
	v->a[66793] = anon_sym_GT_PIPE;
	v->a[66794] = anon_sym_LT_AMP_DASH;
	v->a[66795] = anon_sym_GT_AMP_DASH;
	v->a[66796] = anon_sym_LT_LT;
	v->a[66797] = anon_sym_LT_LT_DASH;
	v->a[66798] = anon_sym_AMP;
	v->a[66799] = aux_sym_concatenation_token1;
	small_parse_table_3340(v);
}

/* EOF small_parse_table_667.c */
