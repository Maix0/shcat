/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_729.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3645(t_small_parse_table_array *v)
{
	v->a[72900] = anon_sym_POUND;
	v->a[72901] = anon_sym_AT;
	v->a[72902] = anon_sym_0;
	v->a[72903] = anon_sym__;
	v->a[72904] = 6;
	v->a[72905] = actions(3);
	v->a[72906] = 1;
	v->a[72907] = sym_comment;
	v->a[72908] = actions(2852);
	v->a[72909] = 1;
	v->a[72910] = sym_string_content;
	v->a[72911] = actions(2856);
	v->a[72912] = 1;
	v->a[72913] = sym_variable_name;
	v->a[72914] = actions(2904);
	v->a[72915] = 1;
	v->a[72916] = anon_sym_DQUOTE;
	v->a[72917] = actions(2854);
	v->a[72918] = 2;
	v->a[72919] = aux_sym__simple_variable_name_token1;
	small_parse_table_3646(v);
}

void	small_parse_table_3646(t_small_parse_table_array *v)
{
	v->a[72920] = aux_sym__multiline_variable_name_token1;
	v->a[72921] = actions(2848);
	v->a[72922] = 9;
	v->a[72923] = anon_sym_BANG;
	v->a[72924] = anon_sym_DASH;
	v->a[72925] = anon_sym_STAR;
	v->a[72926] = anon_sym_QMARK;
	v->a[72927] = anon_sym_DOLLAR;
	v->a[72928] = anon_sym_POUND;
	v->a[72929] = anon_sym_AT;
	v->a[72930] = anon_sym_0;
	v->a[72931] = anon_sym__;
	v->a[72932] = 6;
	v->a[72933] = actions(3);
	v->a[72934] = 1;
	v->a[72935] = sym_comment;
	v->a[72936] = actions(2852);
	v->a[72937] = 1;
	v->a[72938] = sym_string_content;
	v->a[72939] = actions(2856);
	small_parse_table_3647(v);
}

void	small_parse_table_3647(t_small_parse_table_array *v)
{
	v->a[72940] = 1;
	v->a[72941] = sym_variable_name;
	v->a[72942] = actions(2906);
	v->a[72943] = 1;
	v->a[72944] = anon_sym_DQUOTE;
	v->a[72945] = actions(2854);
	v->a[72946] = 2;
	v->a[72947] = aux_sym__simple_variable_name_token1;
	v->a[72948] = aux_sym__multiline_variable_name_token1;
	v->a[72949] = actions(2848);
	v->a[72950] = 9;
	v->a[72951] = anon_sym_BANG;
	v->a[72952] = anon_sym_DASH;
	v->a[72953] = anon_sym_STAR;
	v->a[72954] = anon_sym_QMARK;
	v->a[72955] = anon_sym_DOLLAR;
	v->a[72956] = anon_sym_POUND;
	v->a[72957] = anon_sym_AT;
	v->a[72958] = anon_sym_0;
	v->a[72959] = anon_sym__;
	small_parse_table_3648(v);
}

void	small_parse_table_3648(t_small_parse_table_array *v)
{
	v->a[72960] = 7;
	v->a[72961] = actions(3);
	v->a[72962] = 1;
	v->a[72963] = sym_comment;
	v->a[72964] = actions(1086);
	v->a[72965] = 1;
	v->a[72966] = sym_file_descriptor;
	v->a[72967] = actions(2908);
	v->a[72968] = 1;
	v->a[72969] = aux_sym_heredoc_redirect_token1;
	v->a[72970] = state(1995);
	v->a[72971] = 1;
	v->a[72972] = sym__heredoc_expression;
	v->a[72973] = actions(1068);
	v->a[72974] = 2;
	v->a[72975] = anon_sym_AMP_AMP;
	v->a[72976] = anon_sym_PIPE_PIPE;
	v->a[72977] = state(1600);
	v->a[72978] = 2;
	v->a[72979] = sym_file_redirect;
	small_parse_table_3649(v);
}

void	small_parse_table_3649(t_small_parse_table_array *v)
{
	v->a[72980] = aux_sym_redirected_statement_repeat2;
	v->a[72981] = actions(1070);
	v->a[72982] = 7;
	v->a[72983] = anon_sym_LT;
	v->a[72984] = anon_sym_GT;
	v->a[72985] = anon_sym_GT_GT;
	v->a[72986] = anon_sym_LT_AMP;
	v->a[72987] = anon_sym_GT_AMP;
	v->a[72988] = anon_sym_GT_PIPE;
	v->a[72989] = anon_sym_LT_GT;
	v->a[72990] = 6;
	v->a[72991] = actions(3);
	v->a[72992] = 1;
	v->a[72993] = sym_comment;
	v->a[72994] = actions(2852);
	v->a[72995] = 1;
	v->a[72996] = sym_string_content;
	v->a[72997] = actions(2856);
	v->a[72998] = 1;
	v->a[72999] = sym_variable_name;
	small_parse_table_3650(v);
}

/* EOF small_parse_table_729.c */
