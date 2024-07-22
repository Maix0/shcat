/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_739.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3695(t_small_parse_table_array *v)
{
	v->a[73900] = anon_sym_POUND;
	v->a[73901] = anon_sym_AT;
	v->a[73902] = anon_sym_0;
	v->a[73903] = 6;
	v->a[73904] = actions(3);
	v->a[73905] = 1;
	v->a[73906] = sym_comment;
	v->a[73907] = actions(2904);
	v->a[73908] = 1;
	v->a[73909] = sym_string_content;
	v->a[73910] = actions(2908);
	v->a[73911] = 1;
	v->a[73912] = sym_variable_name;
	v->a[73913] = actions(2990);
	v->a[73914] = 1;
	v->a[73915] = anon_sym_DQUOTE;
	v->a[73916] = actions(2906);
	v->a[73917] = 2;
	v->a[73918] = aux_sym__simple_variable_name_token1;
	v->a[73919] = aux_sym__multiline_variable_name_token1;
	small_parse_table_3696(v);
}

void	small_parse_table_3696(t_small_parse_table_array *v)
{
	v->a[73920] = actions(2900);
	v->a[73921] = 8;
	v->a[73922] = anon_sym_BANG;
	v->a[73923] = anon_sym_DASH;
	v->a[73924] = anon_sym_STAR;
	v->a[73925] = anon_sym_QMARK;
	v->a[73926] = anon_sym_DOLLAR;
	v->a[73927] = anon_sym_POUND;
	v->a[73928] = anon_sym_AT;
	v->a[73929] = anon_sym_0;
	v->a[73930] = 6;
	v->a[73931] = actions(3);
	v->a[73932] = 1;
	v->a[73933] = sym_comment;
	v->a[73934] = actions(2157);
	v->a[73935] = 1;
	v->a[73936] = aux_sym_heredoc_redirect_token1;
	v->a[73937] = actions(2995);
	v->a[73938] = 1;
	v->a[73939] = sym_file_descriptor;
	small_parse_table_3697(v);
}

void	small_parse_table_3697(t_small_parse_table_array *v)
{
	v->a[73940] = actions(2159);
	v->a[73941] = 2;
	v->a[73942] = anon_sym_AMP_AMP;
	v->a[73943] = anon_sym_PIPE_PIPE;
	v->a[73944] = state(1552);
	v->a[73945] = 2;
	v->a[73946] = sym_file_redirect;
	v->a[73947] = aux_sym_redirected_statement_repeat2;
	v->a[73948] = actions(2992);
	v->a[73949] = 7;
	v->a[73950] = anon_sym_LT;
	v->a[73951] = anon_sym_GT;
	v->a[73952] = anon_sym_GT_GT;
	v->a[73953] = anon_sym_LT_AMP;
	v->a[73954] = anon_sym_GT_AMP;
	v->a[73955] = anon_sym_GT_PIPE;
	v->a[73956] = anon_sym_LT_GT;
	v->a[73957] = 6;
	v->a[73958] = actions(3);
	v->a[73959] = 1;
	small_parse_table_3698(v);
}

void	small_parse_table_3698(t_small_parse_table_array *v)
{
	v->a[73960] = sym_comment;
	v->a[73961] = actions(2904);
	v->a[73962] = 1;
	v->a[73963] = sym_string_content;
	v->a[73964] = actions(2908);
	v->a[73965] = 1;
	v->a[73966] = sym_variable_name;
	v->a[73967] = actions(2998);
	v->a[73968] = 1;
	v->a[73969] = anon_sym_DQUOTE;
	v->a[73970] = actions(2906);
	v->a[73971] = 2;
	v->a[73972] = aux_sym__simple_variable_name_token1;
	v->a[73973] = aux_sym__multiline_variable_name_token1;
	v->a[73974] = actions(2900);
	v->a[73975] = 8;
	v->a[73976] = anon_sym_BANG;
	v->a[73977] = anon_sym_DASH;
	v->a[73978] = anon_sym_STAR;
	v->a[73979] = anon_sym_QMARK;
	small_parse_table_3699(v);
}

void	small_parse_table_3699(t_small_parse_table_array *v)
{
	v->a[73980] = anon_sym_DOLLAR;
	v->a[73981] = anon_sym_POUND;
	v->a[73982] = anon_sym_AT;
	v->a[73983] = anon_sym_0;
	v->a[73984] = 6;
	v->a[73985] = actions(3);
	v->a[73986] = 1;
	v->a[73987] = sym_comment;
	v->a[73988] = actions(2904);
	v->a[73989] = 1;
	v->a[73990] = sym_string_content;
	v->a[73991] = actions(2908);
	v->a[73992] = 1;
	v->a[73993] = sym_variable_name;
	v->a[73994] = actions(3000);
	v->a[73995] = 1;
	v->a[73996] = anon_sym_DQUOTE;
	v->a[73997] = actions(2906);
	v->a[73998] = 2;
	v->a[73999] = aux_sym__simple_variable_name_token1;
	small_parse_table_3700(v);
}

/* EOF small_parse_table_739.c */
