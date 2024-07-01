/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_859.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4295(t_small_parse_table_array *v)
{
	v->a[85900] = state(1959);
	v->a[85901] = 4;
	v->a[85902] = sym_arithmetic_expansion;
	v->a[85903] = sym_simple_expansion;
	v->a[85904] = sym_expansion;
	v->a[85905] = sym_command_substitution;
	v->a[85906] = 3;
	v->a[85907] = actions(3);
	v->a[85908] = 1;
	v->a[85909] = sym_comment;
	v->a[85910] = actions(602);
	v->a[85911] = 2;
	v->a[85912] = sym_file_descriptor;
	v->a[85913] = aux_sym_heredoc_redirect_token1;
	v->a[85914] = actions(604);
	v->a[85915] = 10;
	v->a[85916] = anon_sym_AMP_AMP;
	v->a[85917] = anon_sym_PIPE_PIPE;
	v->a[85918] = anon_sym_LT;
	v->a[85919] = anon_sym_GT;
	small_parse_table_4296(v);
}

void	small_parse_table_4296(t_small_parse_table_array *v)
{
	v->a[85920] = anon_sym_GT_GT;
	v->a[85921] = anon_sym_LT_AMP;
	v->a[85922] = anon_sym_GT_AMP;
	v->a[85923] = anon_sym_GT_PIPE;
	v->a[85924] = anon_sym_LT_AMP_DASH;
	v->a[85925] = anon_sym_GT_AMP_DASH;
	v->a[85926] = 10;
	v->a[85927] = actions(3);
	v->a[85928] = 1;
	v->a[85929] = sym_comment;
	v->a[85930] = actions(3414);
	v->a[85931] = 1;
	v->a[85932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85933] = actions(3420);
	v->a[85934] = 1;
	v->a[85935] = sym_string_content;
	v->a[85936] = actions(3422);
	v->a[85937] = 1;
	v->a[85938] = anon_sym_DOLLAR_LBRACE;
	v->a[85939] = actions(3424);
	small_parse_table_4297(v);
}

void	small_parse_table_4297(t_small_parse_table_array *v)
{
	v->a[85940] = 1;
	v->a[85941] = anon_sym_DOLLAR_LPAREN;
	v->a[85942] = actions(3426);
	v->a[85943] = 1;
	v->a[85944] = anon_sym_BQUOTE;
	v->a[85945] = actions(3428);
	v->a[85946] = 1;
	v->a[85947] = anon_sym_DOLLAR;
	v->a[85948] = actions(3430);
	v->a[85949] = 1;
	v->a[85950] = anon_sym_DQUOTE;
	v->a[85951] = state(1847);
	v->a[85952] = 1;
	v->a[85953] = aux_sym_string_repeat1;
	v->a[85954] = state(1959);
	v->a[85955] = 4;
	v->a[85956] = sym_arithmetic_expansion;
	v->a[85957] = sym_simple_expansion;
	v->a[85958] = sym_expansion;
	v->a[85959] = sym_command_substitution;
	small_parse_table_4298(v);
}

void	small_parse_table_4298(t_small_parse_table_array *v)
{
	v->a[85960] = 4;
	v->a[85961] = actions(3);
	v->a[85962] = 1;
	v->a[85963] = sym_comment;
	v->a[85964] = actions(1391);
	v->a[85965] = 1;
	v->a[85966] = sym_variable_name;
	v->a[85967] = actions(1389);
	v->a[85968] = 2;
	v->a[85969] = aux_sym__simple_variable_name_token1;
	v->a[85970] = aux_sym__multiline_variable_name_token1;
	v->a[85971] = actions(1387);
	v->a[85972] = 9;
	v->a[85973] = anon_sym_BANG;
	v->a[85974] = anon_sym_DASH;
	v->a[85975] = anon_sym_STAR;
	v->a[85976] = anon_sym_QMARK;
	v->a[85977] = anon_sym_DOLLAR;
	v->a[85978] = anon_sym_POUND;
	v->a[85979] = anon_sym_AT;
	small_parse_table_4299(v);
}

void	small_parse_table_4299(t_small_parse_table_array *v)
{
	v->a[85980] = anon_sym_0;
	v->a[85981] = anon_sym__;
	v->a[85982] = 10;
	v->a[85983] = actions(3);
	v->a[85984] = 1;
	v->a[85985] = sym_comment;
	v->a[85986] = actions(3414);
	v->a[85987] = 1;
	v->a[85988] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85989] = actions(3420);
	v->a[85990] = 1;
	v->a[85991] = sym_string_content;
	v->a[85992] = actions(3422);
	v->a[85993] = 1;
	v->a[85994] = anon_sym_DOLLAR_LBRACE;
	v->a[85995] = actions(3424);
	v->a[85996] = 1;
	v->a[85997] = anon_sym_DOLLAR_LPAREN;
	v->a[85998] = actions(3426);
	v->a[85999] = 1;
	small_parse_table_4300(v);
}

/* EOF small_parse_table_859.c */
